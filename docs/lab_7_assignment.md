# Lab Assignment 7: Multi-Dimensional Arrays and Function-Based Matrix Manipulation in C++

## 🎯 Topic

Working with Two-Dimensional Arrays and Matrix Processing via Functions  

## 📌 Goal

- Understand declaration, initialization, and traversal of two-dimensional arrays.
- Practice passing arrays to functions in C++ using pointer notation.
- Build modular functions for filling, printing, and modifying matrices.
- Apply dynamic memory allocation techniques for flexible matrix construction.
- Implement logic for row deletion and post-processing of the matrix structure.

## 📂 Project Structure

All related code is located in the project’s root code folder, inside the subdirectory:

```
code/lab_7/
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
      <td><code>lab_7_matrix_row_delete.cpp</code></td>
      <td>C++ program with functions to fill, display, delete matrix row and zero out last row</td>
    </tr>
  </tbody>
</table>

⚠️ The C++ source file must be placed directly in `code/lab_7/` and named exactly as shown above.

---

## ✅ Tasks

1. **Matrix Initialization**
   - Ask user for the size `N` of a square matrix.
   - Use dynamic memory allocation (`new`) to create an `N × N` integer matrix.
   - Fill matrix with random integers from `0` to `99`.

2. **Display Matrix**
   - Create and use a function to print the current matrix in grid format.
   - Separate rows visually and align columns.

3. **Row Deletion**
   - Prompt user for index of row to delete (from `0` to `N-1`).
   - Use a function to:
     - Shift rows above the deleted row up.
     - Fill the last row of matrix with zeros.

4. **Memory Deallocation**
   - Release all dynamically allocated memory properly at the end of program.

5. **Optional Enhancements**
   - Add checks for invalid row indices.
   - Show initial and modified matrix side-by-side for comparison.

---

📎 Demonstrates dynamic memory handling and array-based function composition in C++, reinforcing data structure manipulation through modular design.
