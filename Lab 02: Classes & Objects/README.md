# CSE225 Lab 02: Classes & Objects Documentation

## Introduction
This lab focuses on **C++ classes and objects**, a fundamental part of **Object-Oriented Programming (OOP)**. Students will learn how to:
- **Create and use classes** in C++.
- **Use constructors and destructors** for memory management.
- **Implement dynamic arrays** with proper memory handling.
- **Expand a simple dynamic array into a two-dimensional array.**

By completing these tasks, students will gain a **solid understanding** of how object-oriented programming works in real-world scenarios.

## Overview of Classes & Objects in C++

### 1️⃣ What is a Class?
A **class** in C++ is a **blueprint** for creating objects. It contains **data members (variables)** and **functions (methods)** that manipulate the data.

Example:
```cpp
class Car {
public:
    string brand;
    int speed;
};

### 2️⃣ What is an Object?
An **object** is an **instance** of a class that holds actual data.

Example:
```cpp
int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.speed = 200;
}
```

### 3️⃣ Key OOP Concepts
| Concept | Description |
|---------|------------|
| **Encapsulation** | Hiding data using `private` members and providing controlled access via `public` methods. |
| **Constructor** | A special function that initializes an object when it is created. |
| **Destructor** | A special function that automatically executes when an object is destroyed, used for cleanup. |
| **Dynamic Memory** | Using `new` and `delete` to allocate/deallocate memory. |

## 🛠 Task 1: Basic Dynamic Array Implementation

### 📌 Objective
- Create a **class `dynArr`** that dynamically manages an array.
- Implement methods to **set and get values** from the array.
- Use **a constructor and destructor** to manage memory properly.

### 📝 Header File (`dynarr.h`)
```cpp
#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr {
private:
    int *data;
    int size;
public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int, int);
    int getValue(int);
};

#endif // DYNARR_H_INCLUDED
```

### 📝 Source File (`dynarr.cpp`)
```cpp
#include "dynarr.h"
#include <iostream>
using namespace std;

dynArr::dynArr() {
    data = nullptr;
    size = 0;
}

dynArr::dynArr(int s) {
    data = new int[s];
    size = s;
}

dynArr::~dynArr() {
    delete [] data;
}

void dynArr::setValue(int index, int value) {
    data[index] = value;
}

int dynArr::getValue(int index) {
    return data[index];
}
```

### 📝 Main File (`main.cpp`)
```cpp
#include <iostream>
#include "dynarr.h"
using namespace std;

int main() {
    dynArr arr(5);
    cout << "Enter 5 integer values: ";
    for (int i = 0; i < 5; i++) {
        int value;
        cin >> value;
        arr.setValue(i, value);
    }
    cout << "Stored values: ";
    for (int i = 0; i < 5; i++) {
        cout << arr.getValue(i) << " ";
    }
    cout << endl;
    return 0;
}
```

## 🛠 Task 2: Memory Reallocation with `allocate()`

### 📌 Objective
- Introduce an `allocate(int s)` function to **resize** the dynamic array.
- Ensure **memory safety** by properly deallocating old memory before allocating new space.

### 📝 Updated Header File (`dynarr.h`)
```cpp
void allocate(int s);
```

### 📝 Updated Source File (`dynarr.cpp`)
```cpp
void dynArr::allocate(int s) {
    if (data != nullptr) {
        delete [] data;
    }
    data = new int[s];
    size = s;
}
```

### 📝 Updated Main File (`main.cpp`)
```cpp
int newSize;
cout << "Enter new array size: ";
cin >> newSize;
arr.allocate(newSize);
```

## 🛠 Task 3: Two-Dimensional Array Implementation

### 📌 Objective
- Extend the class to manage a **2D dynamic array**.
- Implement functions to **store and retrieve values** using `(row, col)` indexing.

### 📝 Updated Header File (`dynarr.h`)
```cpp
class dynArr {
private:
    int **data;
    int rows, cols;
public:
    dynArr(int, int);
    ~dynArr();
    void setValue(int, int, int);
    int getValue(int, int);
};
```

### 📝 Updated Source File (`dynarr.cpp`)
```cpp
dynArr::dynArr(int r, int c) {
    rows = r;
    cols = c;
    data = new int*[rows];
    for (int i = 0; i < rows; i++) {
        data[i] = new int[cols];
    }
}

dynArr::~dynArr() {
    for (int i = 0; i < rows; i++) {
        delete [] data[i];
    }
    delete [] data;
}
```

### 📝 Updated Main File (`main.cpp`)
```cpp
int r, c;
cout << "Enter rows and cols: ";
cin >> r >> c;
dynArr arr(r, c);
```

## ⚙️ Compilation and Execution

### 💻 Compile the Code (Linux/Mac)
```bash
g++ -o Task1 main_task1.cpp dynarr.cpp
g++ -o Task2 main_task2.cpp dynarr.cpp
g++ -o Task3 main_task3.cpp dynarr.cpp
```

### 🚀 Run the Executable
```bash
./Task1
./Task2
./Task3
```

## 📌 Conclusion
This lab demonstrates how to:
✅ Define **C++ classes and objects**  
✅ Implement **constructors and destructors**  
✅ Use **dynamic memory allocation (`new` and `delete`)**  
✅ Manage **1D and 2D dynamic arrays efficiently**  

By completing these tasks, students will develop a strong foundation in **C++ Object-Oriented Programming (OOP)** and **memory management**.

## 📜 License
This project is licensed under the **MIT License**. Feel free to **use, modify, and contribute!** 😊

### ⭐ Happy Coding!


