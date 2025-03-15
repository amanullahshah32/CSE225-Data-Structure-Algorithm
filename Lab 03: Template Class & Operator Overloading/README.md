# Lab 03: Template Class and Operator Overloading Documentation

## **Understanding Template Classes and Operator Overloading in C++**

### **🔹 Template Classes in C++**

A **template class** in C++ is a way to create **generic** classes that can work with any data type. Instead of writing separate classes for `int`, `double`, and `char`, we use a **template parameter** (commonly `T`) to make the class reusable.

### **📌 Why Use Template Classes?**

- **Code Reusability** – You don’t need to write separate classes for different data types.
- **Flexibility** – The same class can handle different types (e.g., `int`, `double`, `float`).
- **Efficiency** – Reduces code duplication and maintenance effort.

### **✅ Example: Template Class for a Dynamic Array**

```cpp
#include <iostream>
using namespace std;

// Define a template class
template <typename T>
class DynamicArray {
private:
    T* data;
    int size;
public:
    DynamicArray(int s) {
        size = s;
        data = new T[size];
    }
    ~DynamicArray() {
        delete[] data;
    }
    void setValue(int index, T value) {
        data[index] = value;
    }
    T getValue(int index) {
        return data[index];
    }
};

int main() {
    DynamicArray<int> intArray(5);  // Creates an array of integers
    intArray.setValue(0, 10);
    cout << "Integer Value at Index 0: " << intArray.getValue(0) << endl;

    DynamicArray<double> doubleArray(5);  // Creates an array of doubles
    doubleArray.setValue(0, 5.5);
    cout << "Double Value at Index 0: " << doubleArray.getValue(0) << endl;
    return 0;
}
```

### **🔍 Explanation**

- `template <typename T>` → Declares a template class with `T` as a placeholder for any data type.
- `DynamicArray<int>` → Creates an integer array.
- `DynamicArray<double>` → Creates a double array.
- `setValue()` → Stores values in the array.
- `getValue()` → Retrieves values from the array.

---

### **🔹 Operator Overloading in C++**

Operator overloading allows us to **define custom behaviors for operators** (`+`, `-`, `*`, `!=`, etc.) when used with **objects of a user-defined class**.

### **📌 Why Use Operator Overloading?**

- **Improves Readability** – Instead of writing `multiply(c1, c2)`, you can just write `c1 * c2`.
- **Makes Code Intuitive** – Enables built-in operators to work with user-defined types.
- **Enhances Code Maintainability** – Allows complex operations to be performed naturally.

### **✅ Example: Overloading `+` for Complex Numbers**

```cpp
#include <iostream>
using namespace std;

class Complex {
private:
    double real, imaginary;
public:
    Complex(double r, double i) {
        real = r;
        imaginary = i;
    }
    // Overload the + operator
    Complex operator+(Complex other) {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
    void print() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex sum = c1 + c2;  // Using overloaded + operator
    sum.print();
    return 0;
}
```

### **🔍 Explanation**

- **`operator+`** – Defines how `+` works for `Complex` objects.
- **Returns a `Complex` object** – The sum of `c1` and `c2` is stored in `sum`.
- **More readable** – Instead of calling a function like `c1.add(c2)`, you simply write `c1 + c2`.

---

# **Lab Tasks**

## **Task 1: Converting a Dynamic Array Class to a Template Class**

### **Main File: `main.cpp`**
```cpp
#include <iostream>
#include "dynArr.h"
using namespace std;

int main() {
    dynArr<int> intArray(5);
    for (int i = 0; i < 5; i++) {
        int value;
        cout << "Enter integer value: ";
        cin >> value;
        intArray.setValue(i, value);
    }
    
    cout << "Stored integer values: ";
    for (int i = 0; i < 5; i++) {
        cout << intArray.getValue(i) << " ";
    }
    cout << endl;

    return 0;
}
```

## **Task 2: Operator Overloading for the Complex Class**

### **Main File: `main.cpp`**
```cpp
#include <iostream>
#include "complex.h"
using namespace std;

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);

    Complex product = c1 * c2;
    cout << "Multiplication Result: ";
    product.print();

    if (c1 != c2) {
        cout << "c1 and c2 are NOT equal." << endl;
    } else {
        cout << "c1 and c2 are equal." << endl;
    }

    return 0;
}
```

