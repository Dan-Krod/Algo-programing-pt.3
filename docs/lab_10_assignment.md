# Lab Assignment 10: Array Processing and Conditional Aggregation in Rust🦀

## 🎯 Topic

One-Dimensional Array Traversal and Conditional Summation Using Slices in **Rust**🦀  

## 📌 Goal

- Practice iterating over fixed-size arrays and slicing techniques in Rust.
- Find the largest and smallest negative elements and their indices.
- Use slicing and iterator patterns to compute the sum of cubes of elements between two indices.
- Develop safe and readable code with optional index tracking and conditional logic.
- Apply Rust’s safety features: bounds checking, type inference, and clean memory handling.

## 📂 Project Structure

All related code is located in the project’s root code folder, inside the subdirectory:

```
code/lab_10/
```

| Filename                    | Description                                                                 |
|-----------------------------|-----------------------------------------------------------------------------|
| `lab_10_array_neg_cubes.rs` | Rust program that finds two negative values in an array and sums cubes between them |

⚠️ The Rust source file must be placed directly in `code/lab_10/` and named exactly as shown above.

---

## ✅ Tasks

1. **Array Initialization**
   - Declare a fixed array of 43 `f64` values.
   - Pre-fill it with sample values or read from user.

2. **Search for Target Elements**
   - Iterate through array to find:
     - Maximum negative value and its index
     - Minimum negative value and its index
   - Use `Option<usize>` to safely store indices.

3. **Determine Range for Summation**
   - Slice the array between `start + 1..end`
     - Adjust order if indices are reversed
   - For each element in slice, calculate cube: `x.powi(3)`
   - Sum all such cubes into `sum_of_cubes`

4. **Output Results**
   - Print both negative values with indices
   - Display final result:
     ```
     Сума кубів елементів між найбільшим і найменшим від’ємними елементами: ...
     ```

5. **Edge Case Handling**
   - If insufficient negative elements → show warning

---

📎 Applies safe indexing, slice-based aggregation, and numeric computation in **Rust**🦀 to perform targeted array analysis in a mathematically precise and memory-safe manner.
