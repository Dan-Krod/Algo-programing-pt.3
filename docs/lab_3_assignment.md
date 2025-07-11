# Lab Assignment 3: Arrays and Pointers in C

## 🎯 Topic

One-Dimensional Arrays, Pointer Manipulation, and Loop Structures in C  

## 📌 Goal

- Explore basic array construction and access in C, including global, static, and automatic memory.
- Work with pointers and learn how they interact with array elements.
- Perform numeric calculations and input validation using loop constructs (`for`, `while`, `do...while`).
- Practice row-wise summation, element filtering, and range-based operations using pointer arithmetic.
- Use formatted output and control logic to organize screen-based reporting of results.

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
      <td><code>while</code> loop summing even integers until sum &gt; 20</td>
    </tr>
    <tr>
      <td><code>task_2.c</code></td>
      <td><code>for</code> loop calculating squares with early exit if <code>a &gt; 500</code></td>
    </tr>
    <tr>
      <td><code>task_3.c</code></td>
      <td>Nested <code>for</code> loop printing function <code>F = a² - b²</code> over 2D ranges</td>
    </tr>
    <tr>
      <td><code>task_4.c</code></td>
      <td><code>while</code> loop filtering and summing odd integers entered from keyboard</td>
    </tr>
    <tr>
      <td><code>task_5.c</code></td>
      <td><code>do...while</code> input validation and calculating <code>sinh(x)</code> and <code>cosh(x)</code></td>
    </tr>
  </tbody>
</table>

⚠️ All source files must be placed directly in `code/lab_3/` and named exactly as shown above.

---

## ✅ Tasks

1. **Task 1 – Sum Even Numbers via `while`**
   - Start from zero and sum even values until total exceeds 20.
   - Track number of iterations and final term added.

2. **Task 2 – Squares via `for`**
   - Input iteration count from keyboard.
   - Print square of each number unless the next value exceeds 500.

3. **Task 3 – Function Evaluation via Nested Loops**
   - Compute `F = a² – b²` for `a ∈ [0, 40]` step 4 and `b ∈ [6, 20]` step 2.
   - Use formatted table output with alignment.

4. **Task 4 – Filtering Values**
   - Allow input of up to 15 integers; exit on `0`.
   - Sum and count values in ASCII range `[48, 122]`.
   - Print each matched value as character and total sum.

5. **Task 5 – Controlled Input for Hyperbolic Functions**
   - Accept up to 12 real numbers in range `[-3π, 3π]`.
   - Validate input using `do...while`.
   - For valid values, compute `sinh(x)` and `cosh(x)`.
   - Exit if input exceeds bounds or after 5 valid entries.

---

📎 Applies loop structures, input control, pointer arithmetic, and numeric operations in C, reinforcing mastery of array and memory interaction in low-level programming.
