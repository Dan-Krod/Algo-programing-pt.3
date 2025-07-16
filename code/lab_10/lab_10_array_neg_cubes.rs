fn main() {
    let arr: [f64; 43] = [
        -3.5, 1.2, 2.3, -1.1, -0.5, 3.6, -7.8, 4.2, 0.0, 5.4, 6.8, -9.2, -4.1,
        -2.3, 3.5, 0.1, -8.6, -1.4, 2.9, 4.8, 1.5, -0.7, -6.3, -3.8, 1.1, 7.2, 
        -5.4, 0.6, 3.8, 9.0, -2.2, -3.1, 6.5, 5.3, -7.1, 4.7, -1.3, 2.0, -4.9,
        1.0, -3.6, 2.8, 0.0, // Додано ще один елемент
    ];

    let mut max_neg = f64::NEG_INFINITY;
    let mut min_neg = f64::INFINITY;
    let mut max_neg_index = None;
    let mut min_neg_index = None;

    for (i, &value) in arr.iter().enumerate() {
        if value < 0.0 {
            if value > max_neg {
                max_neg = value;
                max_neg_index = Some(i);
            }
            if value < min_neg {
                min_neg = value;
                min_neg_index = Some(i);
            }
        }
    }

    if let (Some(start), Some(end)) = (max_neg_index, min_neg_index) {
        let (start, end) = if start < end { (start, end) } else { (end, start) };

        let sum_of_cubes: f64 = arr[start + 1..end]
            .iter()
            .map(|&x| x.powi(3))
            .sum();

        println!(
            "Сума кубів елементів між найбільшим ({:.2}) і найменшим ({:.2}) від'ємними елементами: {:.2}",
            max_neg, min_neg, sum_of_cubes
        );
    } else {
        println!("У масиві недостатньо від'ємних елементів для обчислення.");
    }
}
