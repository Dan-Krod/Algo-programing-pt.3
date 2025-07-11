use std::f64;
use std::io::{self, Write};

fn term(x: f64, k: usize) -> f64 {
    1.0 / ((2 * k + 1) as f64 * x.powi((2 * k + 1) as i32))  // Приведення до i32
}

fn sum1(x: f64, n: usize) -> f64 {
    let mut z = 0.0;
    for k in 0..=n {
        z += term(x, k);
    }
    z
}

fn sum2(x: f64, eps: f64) -> f64 {
    let mut z = 0.0;
    let mut ak: f64 = 1.0;  // Визначаємо тип f64
    let mut k = 0;
    while ak.abs() > eps {  // Викликаємо abs() на f64
        ak = term(x, k);
        z += ak;
        k += 1;
    }
    z
}

fn y(x: f64) -> f64 {
    0.5 * ((x + 1.0) / (x - 1.0)).ln()
}

fn main() {
    let mut input = String::new();

    print!("Input amount of row elements n: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input).unwrap();
    let n: usize = input.trim().parse().unwrap();

    input.clear();
    print!("Input delta: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input).unwrap();
    let delta: f64 = input.trim().parse().unwrap();

    let x1 = 1.1;
    let x2 = 2.0;

    println!("{:<10}{:<15}{:<15}{:<15}", "x", "Sn", "Se", "y");
    println!("{}", "-".repeat(55));

    for j in 1..=10 {
        let x = x1 + (x2 - x1) * (j - 1) as f64 / 9.0;

        let sn = sum1(x, n);
        let se = sum2(x, delta);
        let y_val = y(x);

        println!("{:<10.4}{:<15.6}{:<15.6}{:<15.6}", x, sn, se, y_val);
    }
}
