# Lab Assignment 5: Multi-Dimensional Arrays and Dynamic Memory in C

## 🎯 Topic

Two-Dimensional Arrays, Pointer Arrays, and Dynamic Memory Allocation  
(Laboratory Work #5, Variant 6)

## 📌 Goal

- Practice operations on multi-dimensional arrays, including manual input and random data generation.
- Learn how to access and manipulate array elements via pointers.
- Explore array initialization (complete and partial) and memory layout.
- Work with pointer arrays for strings, including size handling and character counting.
- Use dynamic memory allocation (`malloc`, `new`) to create flexible arrays and matrices.
- Perform matrix addition and multiplication using dynamically allocated storage.

## 📂 Project Structure

All related code is located in the project’s root code folder, inside the subdirectory:

```
code/lab_5/
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
      <td>Manual input of 5×3 array and counting odd elements per column</td>
    </tr>
    <tr>
      <td><code>task_2.c</code></td>
      <td>Random float array [4×5]; product of non-zero elements via pointer access</td>
    </tr>
    <tr>
      <td><code>task_3.c</code></td>
      <td>Array of 3 pointers to strings; calculates size and count of character 'e'</td>
    </tr>
    <tr>
      <td><code>task_4.c</code></td>
      <td>Dynamic <code>double</code> array with size from user; filled with random values [0;32]</td>
    </tr>
    <tr>
      <td><code>task_5.c</code></td>
      <td>Two dynamic square matrices with addition and multiplication; prints final result</td>
    </tr>
  </tbody>
</table>

⚠️ All C source files must be placed directly in `code/lab_5/` and named exactly as shown above.

---

## ✅ Tasks

1. **Task 1 – Odd Element Counter**
   - Input a 5×3 array of integers manually.
   - Print the array.
   - Count and display number of odd values per column.

2. **Task 2 – Non-Zero Product of Float Array**
   - Create a 4×5 float array filled with random values in range `[-5.000; 5.000]`.
   - Use pointer notation to traverse elements.
   - Calculate and print the product of all non-zero elements.

3. **Task 3 – Pointer Array for Strings**
   - Declare an array of 3 string pointers: university, faculty, specialty.
   - Output each string and total memory size of pointers.
   - Count number of `'e'` characters in the third string.

4. **Task 4 – Dynamic Double Array**
   - Ask user for array size.
   - Allocate memory dynamically using `new` or `malloc`.
   - Fill array with random `double` numbers in range `[0.00; 32.00]`.
   - Print array and deallocate memory properly.

5. **Task 5 – Matrix Operations with Dynamic Allocation**
   - Input size `N` for square matrix.
   - Create two dynamic matrices `matr` and `mas`.
   - Input first matrix manually, second is filled with random values `[-50; 50]`.
   - Sum both matrices → result stored in `mas`.
   - Multiply `matr × mas` → store result in third matrix `result`.
   - Print final matrix and free all memory.

---

📎 Explores practical implementation of multi-dimensional arrays, pointer-based string manipulation, and dynamic memory operations including matrix math — essential for mastering structured and memory-aware C programming.
