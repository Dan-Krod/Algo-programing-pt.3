# 💻 Algo-programing-pt.3

## 📖 About This Repository

This repository contains the complete set of laboratory assignments for the academic course "Algorithms and Data Structures – Part 3". It spans ten labs that gradually introduce system-level programming concepts in **C**, **C++**, and **Rust**, including array manipulation, loop constructs, pointer usage, dynamic memory, character processing, matrix operations, and power series approximation.

---

## 📁 Folder Structure

```
├── code/
│   ├── lab_1/          # Data types & basic I/O in C
│   ├── lab_2/          # Conditional selection operators
│   ├── lab_3/          # Looping constructs and input control
│   ├── lab_4/          # Arrays and pointers
│   ├── lab_5/          # Multi-dimensional arrays & dynamic memory
│   ├── lab_6/          # Power series approximation in C++
│   ├── lab_7/          # Matrix row operations (delete, zero-out)
│   ├── lab_8/          # Uppercase character counter in C++
│   ├── lab_9/          # Power series expansion in Rust
│   └── lab_10/         # Conditional cube sum in Rust
│
└── docs/
    ├── lab_1_assignment.md
    ├── lab_2_assignment.md
    ├── lab_3_assignment.md
    ├── lab_4_assignment.md
    ├── lab_5_assignment.md
    ├── lab_6_assignment.md
    ├── lab_7_assignment.md
    ├── lab_8_assignment.md
    ├── lab_9_assignment.md
    └── lab_10_assignment.md
```

Each `lab_X` folder contains source code for the respective lab, including `.c`, `.cpp`, or `.rs` files.  
Each assignment file in `docs/` includes structured goals, task descriptions, and evaluation criteria.

---

## 🛠 Technologies Used

- C (GCC)
- C++ (G++ / Clang++)
- Rust 1.74+
- Standard libraries: `<math.h>`, `<iostream>`, `<cstring>`, `<cctype>`
- Git + Markdown for documentation

---

## 🚀 Getting Started

1. Clone the repository:
   ```bash
   git clone ....
   ```

2. Navigate to the desired lab folder:
   ```bash
   cd code/lab_6/
   ```

3. Compile and run:
   - For C:
     ```bash
     gcc task_2.c -o task_2
     ./task_2
     ```
   - For C++:
     ```bash
     g++ lab_6_series_sum.cpp -o lab6
     ./lab6
     ```
   - For Rust:
     ```bash
     rustc lab_9_series_approx.rs
     ./lab_9_series_approx
     ```

4. View the corresponding lab assignment in `docs/`:
   ```bash
   cat docs/lab_6_assignment.md
   ```

---

## 📎 Notes

All programs are self-contained, written with explicit formatting and safety in mind.  
Dynamic memory is properly deallocated, and logic is modularized across user-defined functions.  
C++ and Rust labs demonstrate analytical computation through series expansion and matrix handling.  
Each assignment was crafted with reproducibility and clarity as a priority.

---

## ⚠️ Usage & Copyright

All content in this repository is intended for educational and archival purposes.  
Any reuse, adaptation, or distribution of code or documentation from this project requires explicit permission from the author.

Please contact the maintainer if you wish to copy, reference, or build upon the materials.

© 2024–2025 Daniel. All rights reserved.
