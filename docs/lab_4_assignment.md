# Lab Assignment 4: Arrays and Pointers in C

## 🎯 Topic

Single-Dimensional Arrays, Pointer Access, and Indexing Mechanisms in C  
(Laboratory Work #4, Variant 6)

## 📌 Goal

- Learn different ways to declare, initialize, and interact with one-dimensional arrays in C.
- Apply pointer arithmetic and dereferencing to manipulate and access array elements.
- Work with global, automatic, and static arrays and understand memory layout.
- Process numeric and character data using array structures.
- Sort, analyze, and calculate based on array contents, including pointer-based access.

## 📂 Project Structure

All related code is located in the project’s root code folder, inside the subdirectory:

```
code/lab_4/
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
      <td>Manual input of integer array; calculates average of positive values</td>
    </tr>
    <tr>
      <td><code>task_2.c</code></td>
      <td>Fills array with random values and counts even numbers</td>
    </tr>
    <tr>
      <td><code>task_3.c</code></td>
      <td>Finds maximum negative value using pointer dereferencing</td>
    </tr>
    <tr>
      <td><code>task_4.c</code></td>
      <td>Sorts array in descending order using minimum-selection swap method</td>
    </tr>
    <tr>
      <td><code>task_5.c</code></td>
      <td>Reads and combines two text strings; builds a message with character count</td>
    </tr>
  </tbody>
</table>

⚠️ All C source files must be placed directly in `code/lab_4/` and named exactly as shown above.

---

## ✅ Tasks

1. **Task 1 – Positive Average**  
   - Input an array of 5 integers.  
   - Calculate and output the average of all positive elements.  
   - Display array contents and result.

2. **Task 2 – Random Fill & Even Count**  
   - Fill an array of 16 integers with random values in the range `[-20; 20]`.  
   - Count and display how many elements are even.

3. **Task 3 – Max Negative Using Pointers**  
   - First element is fixed as `-2000`, other six are user-defined.  
   - Use a pointer to find the largest (closest to zero) negative value and its index.  
   - Display results with full array output.

4. **Task 4 – Sorting in Descending Order**  
   - Fill a float array of 10 elements with random values in `[-50.5; 50.5]`.  
   - Sort the array in descending order using selection of minimum value.  
   - Show array before and after sorting.

5. **Task 5 – String Handling**  
   - Input two text strings: movie title and director’s surname.  
   - Build a full message indicating that the movie is now available for sale.  
   - Calculate and display total character count of the final message.

---

📎 Explores foundational techniques for working with arrays and pointers in C, including input/output, arithmetic operations, memory access via pointers, and string manipulation in real-world contexts.