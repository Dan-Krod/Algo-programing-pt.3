# Lab Assignment 1: Data Types and Basic I/O in C

## 🎯 Topic

Primitive Data Types, Input/Output Operations, Type Limits, Arithmetic and Formatting in C  

## 📌 Goal

- Learn and apply basic data types in C: `char`, `int`, `float`, `short`, `long`, `double`.
- Practice formatted and unformatted input/output using `printf()`, `scanf()`, `cin`, and `cout`.
- Explore type ranges, memory allocation size in bytes, and ASCII representation.
- Demonstrate arithmetic operations, type overflow, and formatting rules.
- Build short programs and modify them according to structured task prompts.

## 📂 Project Structure

All related code is located in the project’s root code folder, inside the subdirectory:

```
code/lab_1/
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
      <td>Outputs character codes, variable sizes, and formatted display</td>
    </tr>
    <tr>
      <td><code>task_2.c</code></td>
      <td>Arithmetic and logical operations with explanation</td>
    </tr>
    <tr>
      <td><code>task_3.c</code></td>
      <td>Reads <code>double</code> values and calculates expression with formatted output</td>
    </tr>
    <tr>
      <td><code>task_4.c</code></td>
      <td>Converts inches to cm, then circle circumference using <code>cin/cout</code></td>
    </tr>
    <tr>
      <td><code>task_5.cpp</code></td>
      <td>Demonstrates overflow of numeric types and compares type limits</td>
    </tr>
    <tr>
      <td><code>task_6.cpp</code></td>
      <td>Displays formatted string constants and demonstrates string alignment</td>
    </tr>
  </tbody>
</table>

⚠️ All source files must be placed directly in `code/lab_1/` and named exactly as shown above.  
Use `.c` for C files and `.cpp` for C++ files where required by task instructions.

---

## ✅ Tasks

1. **Basic Type Output & ASCII Encoding**
     - Display character code and size for `char`, `int`, `float`.
     - Add custom output: name, first letter’s ASCII codes, and new variables of type `short`, `long`, `double`.

2. **Integer & Floating Arithmetic**
     - Perform arithmetic operations on variables and explain results using comments.
     - Apply expression logic and ternary operators with correct precedence.

3. **Input, Calculation, and Formatting**
     - Read values using `scanf()` and format floating-point output with width and precision.
     - Use `cin/cout` for additional formatting and conversion.

4. **Type Ranges & Overflow**
     - Demonstrate min/max values and overflow for different types.
     - Use `<limits.h>` to compare declared variables against boundaries.

5. **String Formatting**
     - Use `#define` to define labeled strings.
     - Display strings with field width and alignment.

---

📎 Covers foundational operations in C and C++, including variable handling, type inspection, input/output, formatting, and overflow behavior — essential for mastering low-level programming logic.
