# Lab Assignment 8: Character and String Manipulation in C++

## 🎯 Topic

Working with Characters, Strings, and Standard Library Functions in C++  
(Laboratory Work #8, Variant 6)

## 📌 Goal

- Practice handling individual characters and string arrays in C++ using standard and user-defined functions.
- Learn how to use functions from `<cctype>` and `<cstring>` to validate, convert, and count character types.
- Implement user-defined functions with pointer-based access to strings.
- Build structured input/output logic for character processing tasks.
- Pass strings to functions by pointer and array reference.

## 📂 Project Structure

All related code is located in the project’s root code folder, inside the subdirectory:

```
code/lab_8/
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
      <td><code>lab_8_uppercase_count.cpp</code></td>
      <td>C++ program that reads a string and counts uppercase letters using <code>num_upper()</code></td>
    </tr>
  </tbody>
</table>

⚠️ The C++ source file must be placed directly in `code/lab_8/` and named exactly as shown above.

---

## ✅ Tasks

1. **Function Design**
   - Implement the function:
     ```cpp
     int num_upper(const char* s);
     ```
   - Loop through string and count all uppercase characters using `isupper()` from `<cctype>`.

2. **Main Program Logic**
   - Declare static `char str[100]`.
   - Read user input using `std::cin.getline()` to allow spaces.
   - Call `num_upper()` and print the count of uppercase letters.

3. **Sample Output**
   ```
   Enter the string: Internet of Things - The BEST
   Number of uppercase letters: 7
   ```

4. **Additional Notes**
   - Use pointer-based traversal (`const char* s`) inside `num_upper`.
   - Ensure program supports spaces and long input strings.

---

📎 Reinforces practical C++ skills in string handling, character analysis, and use of standard functions by implementing a modular tool for uppercase letter counting.