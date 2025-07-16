# Lab Assignment 9: Iterative Function Approximation Using Power Series in Rust🦀

## 🎯 Topic

Defining Functions and Managing Iterative Processes for Series Expansion in **Rust**🦀  

## 📌 Goal

- Implement mathematical functions and iterative logic using the Rust programming language.
- Apply power series expansion to compute approximate values of a complex logarithmic function.
- Use fixed-term summation (`sum1`) and accuracy-controlled summation (`sum2`) with conditional loop termination.
- Compare approximate results with analytically exact values to assess convergence and precision.
- Structure the program modularly with functions: `term()`, `sum1()`, `sum2()`, and `y()`.

## 📂 Project Structure

All related code is located in the project’s root code folder, inside the subdirectory:

```
code/lab_9/
```

<table>
  <thead>
    <tr>
      <th>Filename</th>
      <th>Description</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code>lab_9_series_approx.rs</code></td>
      <td>Rust program to compute power series approximation with fixed term and error control</td>
    </tr>
  </tbody>
</table>

⚠️ The Rust source file must be placed directly in `code/lab_9/` and named exactly as shown above.

---

## ✅ Tasks

1. **Function Definitions**
   - Define `term(x, k)` → returns k-th term of the series:
     ```
     term(x, k) = 1 / [(2k + 1) * x^(2k + 1)]
     ```

2. **Series Summation Functions**
   - `sum1(x, n)` → calculates sum of first `n` terms  
   - `sum2(x, eps)` → calculates sum until next term is smaller than `eps`

3. **Exact Function**
   - Define `y(x)` as:
     $$
     y(x) = \frac{1}{2} \cdot \ln\left(\frac{x + 1}{x - 1}\right)
     $$

4. **Main Function Workflow**
   - Read user input: number of terms `n` and error `delta`
   - Iterate `x` from `1.1` to `2.0` in 10 steps
   - For each `x`, compute:
     - `Sn = sum1(x, n)`
     - `Se = sum2(x, delta)`
     - `y(x)` (exact)
   - Output results formatted in columns:
     ```
     x        Sn          Se          y
     ```

5. **Execution & Output**
   - Demonstrate correct convergence of both summation methods
   - Support inputs like `0.00001`, `0.1` and show numeric precision clearly
   - Use modular structure with proper `fn` declarations and type annotations

---

📎 Introduces core **Rust**🦀 techniques for functional programming, precision control, and numeric approximation using power series and loop-based iteration.
