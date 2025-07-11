# Lab Assignment 3: Looping Constructs and Input Control in C

## 🎯 Topic

Iteration Logic Using `for`, `while`, `do...while` and Controlled Input in C  
(Laboratory Work #3, Variant 6)

## 📌 Goal

- Explore cyclic execution using all loop operators in C: `for`, `while`, `do...while`.
- Implement algorithms using nested loops, conditional exit (`break`), skip iteration (`continue`), and input bounds control.
- Solve real-world tasks including row summation, input filtering, and function tabulation.
- Compare behavioral differences between loop types and demonstrate conversion between loop styles.

## 📂 Project Structure

All related code is located in the project’s root code folder, inside the subdirectory:

```
code/lab_3/
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
      <td><code>task_1.c</code></td>
      <td>Uses <code>while</code> to sum values divisible by 4 until limit is reached</td>
    </tr>
    <tr>
      <td><code>task_2.c</code></td>
      <td><code>for</code> loop calculating squares with exit condition and user-defined length</td>
    </tr>
    <tr>
      <td><code>task_3.c</code></td>
      <td>Nested <code>for</code> loops computing <code>F = a² − b²</code> over a 2D range table</td>
    </tr>
    <tr>
      <td><code>task_4.c</code></td>
      <td>Input filtering and summing characters in ASCII range using <code>while</code></td>
    </tr>
    <tr>
      <td><code>task_5.c</code></td>
      <td>Validates range via <code>do...while</code>, then computes <code>sinh(x)</code> and <code>cosh(x)</code></td>
    </tr>
  </tbody>
</table>

⚠️ All C source files must be placed directly in `code/lab_3/` and named exactly as shown above.

---

## ✅ Tasks

1. **Even Number Summation (`while`)**
   - Sum integers divisible by 4 until the last value exceeds 36.
   - Count number of iterations and print each step.

2. **Square Computation (`for`)**
   - Ask user for number of terms.
   - Compute square of each number, but exit if `a > 500`.

3. **Function Table (`F = a² − b²`)**
   - Use nested `for` loops to vary:
     - `a` in `[0, 40]` step 4
     - `b` in `[6, 20]` step 2
   - Print table with aligned output of `a`, `b`, and `F`.

4. **ASCII Filtering**
   - Accept up to 15 integers from keyboard.
   - For values in range `[48, 122]`, show corresponding ASCII character and calculate total sum.
   - Terminate on input of `0`.

5. **Hyperbolic Function Calculation**
   - Accept real values in range `[-3π, 3π]` via `do...while`.
   - Compute `sinh(x)` and `cosh(x)` for first 5 valid entries.
   - Maximum input attempts: 12; terminate otherwise.

---

📎 Applies loop selection, input validation, and nested logic to solve iterative computation problems in C, reinforcing control flow design and user-driven logic interaction.
