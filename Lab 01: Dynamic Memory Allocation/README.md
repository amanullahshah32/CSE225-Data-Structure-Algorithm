
# Dynamic Memory Allocation Lab

This repository contains a C++ lab assignment focused on **dynamic memory allocation**. The lab demonstrates how to allocate and deallocate memory at runtime using the `new` and `delete` operators in C++. This is an essential concept in C++ programming and is critical for managing memory effectively in real-world applications.

## Overview

Dynamic memory allocation allows you to create data structures whose size can be determined during runtime, rather than at compile time. In C++, this is accomplished with the `new` operator to allocate memory on the heap and the `delete` operator to free that memory when it is no longer needed.

### Key Syntax

- **Allocation of a Single Object:**
  ```cpp
  DataType *ptr = new DataType;
  ```

- **Allocation of an Array:**
  ```cpp
  DataType *arr = new DataType[arraySize];
  ```

- **De-allocation:**

  **For a single object:**
  ```cpp
  delete ptr;
  ```

  **For an array:**
  ```cpp
  delete [] arr;
  ```

## Project Structure

```bash
Lab01_Dynamic_memory_Allocation/
│
├── Task1.cpp         # Task 1: Dynamic integer array allocation
├── Task2.cpp         # Task 2: 2D character array with uniform rows
├── Task3.cpp         # Task 3: 2D jagged integer array allocation
└── README.md         # This documentation file
```

## Task Descriptions

### Task 1: Dynamic Integer Array

**Description:**  
The program prompts the user to enter the size of an integer array. It then dynamically allocates an array of that size using the `new` operator. The user inputs values into the array, which are then displayed on the screen. Finally, the allocated memory is released using the `delete[]` operator.

**Compilation:**

```bash
g++ Task1.cpp -o Task1
```

**Usage:**

```bash
./Task1
```

**Key Concepts:**
- Dynamic allocation of an array.
- User input to populate the array.
- Memory de-allocation to prevent memory leaks.

---

### Task 2: Two-Dimensional Character Array (Uniform Rows)

**Description:**  
In this task, the user specifies the number of rows and the number of columns for a 2D character array. Memory is dynamically allocated for each row (each row having the same number of columns). The program then takes a string input for each row and displays all the strings. Memory is deallocated appropriately after use.

**Compilation:**

```bash
g++ Task2.cpp -o Task2
```

**Usage:**

```bash
./Task2
```

**Key Concepts:**
- Dynamic allocation of a 2D array using an array of pointers.
- Handling C-style strings (including allocating extra space for the null-terminator).
- Properly deallocating multi-dimensional arrays.

---

### Task 3: Two-Dimensional Jagged Integer Array

**Description:**  
This task involves creating a two-dimensional integer array where each row can have a different number of elements (a jagged array). The user inputs the number of rows and, for each row, specifies the number of columns. The program then dynamically allocates each row, fills in the data with user inputs, displays the array, and finally deallocates all allocated memory.

**Compilation:**

```bash
g++ Task3.cpp -o Task3
```

**Usage:**

```bash
./Task3
```

**Key Concepts:**
- Dynamic allocation of a jagged array.
- Managing arrays with different row sizes.
- Ensuring each allocated memory block is properly freed.

## Learning Outcomes

By completing these tasks, you will:

- Understand the use of `new` and `delete` for dynamic memory allocation in C++.
- Learn how to handle single and multi-dimensional arrays dynamically.
- Gain practical experience in managing memory to avoid leaks.
- Build a foundation for more complex data structures and memory management techniques in C++.

## Getting Started

**Clone the Repository:**

```bash
git clone https://github.com/amanullahshah32/CSE225-Data-Structure-Algorithm.git
```

**Open the Project:**  
Use an IDE such as Code::Blocks or any other C++ IDE of your choice.

**Compile and Run:**  
Follow the instructions in each task section to compile and run the individual programs.

## Conclusion

Dynamic memory allocation is a fundamental part of C++ programming. Mastering these concepts is crucial for effective and efficient software development. This lab is designed to build your confidence in handling dynamic memory, paving the way for more advanced topics in data structures and algorithms.

Feel free to open issues or submit pull requests if you have any questions or improvements. **Happy coding!**
