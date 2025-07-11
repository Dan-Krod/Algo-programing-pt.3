# Lab Assignment 6: Function Approximation Using Power Series in C++

## 🎯 Topic

Iterative Summation, Series Expansion, and Function Modeling with User-Controlled Accuracy  
(Laboratory Work #6, Variant 6)

## 📌 Goal

- Approximate a mathematical function using its power series expansion.
- Implement iterative summation techniques with fixed term count and controlled accuracy.
- Compare approximated values with exact analytical results.
- Use modular functions in C++ for structured computation: `term()`, `sum1()`, `sum2()`, and `y()`.

## 📂 Project Structure

All related code is located in the project’s root code folder, inside the subdirectory:

```
code/lab_6/
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
      <td><code>lab_6_series_sum.cpp</code></td>
      <td>C++ program implementing power series approximation of ln-based function</td>
    </tr>
  </tbody>
</table>

⚠️ The C++ source file must be placed directly in `code/lab_6/` and named exactly as shown above.

---

## ✅ Tasks

1. **Function Setup**  
   - Implement the function:
     $$
     y(x) = \frac{1}{2} \cdot \ln\left(\frac{x + 1}{x - 1}\right)
     $$
   - Define its power series representation:
     $$
     S_n = \frac{1}{x} + \frac{1}{3x^3} + \frac{1}{5x^5} + \dots + \frac{1}{(2n+1)x^{2n+1}}
     $$

2. **Modular Functions to Implement**  
   - `term(x, k)` — returns k-th term of the series  
   - `sum1(x, n)` — computes partial sum with fixed number of terms  
   - `sum2(x, eps)` — computes sum until term magnitude < `eps`  
   - `y(x)` — returns exact value via analytical formula

3. **Main Program Logic**  
   - Input from user:
     - Number of terms `n`
     - Accuracy `delta`
   - Loop for `x` in range `[1.1, 2.0]` with 10 steps:
     - Calculate values via `sum1()`, `sum2()`, `y()`  
     - Display results in formatted table

4. **Output Requirements**  
   - Show columns: `x`, `Sn`, `Se`, `y`  
   - Support delta values like `0.00001` and `0.1`  
   - Clearly show difference between approximated and exact values

---

📎 Demonstrates iterative computation and accuracy control in function approximation through modular C++ programming and analytical validation.

