# Lab Assignment 2: Conditional Selection Operators in C

## 🎯 Topic

Exploring Branching Logic Using `if...else`, `switch`, and Nested Conditionals in C  
(Laboratory Work #2, Variant 6)

## 📌 Goal

- Understand and apply the logic of conditional branching using `if`, `else`, `switch`, and nested statements.
- Practice decision-making constructs through real-world scenarios (divisibility, range checks, day/month mapping).
- Implement programs with structured logic using selection operators.
- Deepen understanding of `switch` semantics, including `break`, `default`, and multi-case labels.

## 📂 Project Structure

All related code is located in the project’s root code folder, inside the subdirectory:

```
code/lab_2/
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
      <td>Checks if a number ends with <code>0</code> using <code>if</code> logic</td>
    </tr>
    <tr>
      <td><code>task_2.c</code></td>
      <td>Nested <code>if</code> to verify conditions based on number value and divisibility</td>
    </tr>
    <tr>
      <td><code>task_3.c</code></td>
      <td>Character-based <code>switch</code> to display European capitals</td>
    </tr>
    <tr>
      <td><code>task_4.c</code></td>
      <td>Numeric <code>switch</code> to determine season based on month number</td>
    </tr>
    <tr>
      <td><code>task_5.c</code></td>
      <td>Finds minimum of three numbers and checks its parity</td>
    </tr>
  </tbody>
</table>                 |

⚠️ All C source files must be placed directly in `code/lab_2/` and named exactly as shown above.

---

## ✅ Tasks

1. **Task 1 – Ends with Zero**
   - Read an integer and determine whether it ends with digit `0` using modulo.
   - Use `if...else` with formatted output for both cases.

2. **Task 2 – Nested Conditions**
   - Use nested `if...else` to evaluate whether a number is divisible by 4 or 3, depending on whether it’s greater than 50 or not.

3. **Task 3 – Switch with Character**
   - Input the first letter of a capital and display its full name.
   - Use `switch` and `tolower()` to support lowercase logic.
   - Include a default branch for unknown input.

4. **Task 4 – Switch with Multiple Case Labels**
   - Input a month number and display season name.
   - Use grouped case labels: (3,4,5), (6–8), etc.
   - Handle invalid month numbers with error message.

5. **Task 5 – Minimum & Even/Odd Check**
   - Input 3 integers and find the minimum.
   - Use `if...else` to check if the minimum value is even or odd.
   - Display both results clearly.

---

📎 Applies core control-flow constructs in C by handling user input, conditional validation, and result display using branching and selection operators.

