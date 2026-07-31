# Module 1: C++ Fundamentals

Learn the basics of programming and the C++ language. This module builds the foundation needed for problem solving and competitive programming.

---

# Introduction to Programming

Programming is the process of writing instructions that tells a computer what to do. These instructions are called **programs**.

### Practice Problems

**Problem 1:** 
Write a program that prints:

```
Hello, Gen Z
Welcome to Competitive Programming!
```

**Problem 2:** 
Write a program that prints your:
- Name
- University
- Favorite Programming Language

Each on a new line.

---

# Structure of a C++ Program

A C++ program consists of different parts such as headers, the `main()` function, and statements.

### Practice Problems

**Problem 1:**  
Write a C++ program that prints `Welcome to C++`.

**Problem 2:**  
Write a program that prints your name three times using three different `cout` statements.

---

# Variables & Data Types

Variables are used to store data. Different data types are used to store different kinds of values.

---

# What is a Variable?

A **variable** is a named location in memory used to store data.

### Syntax

```cpp
data_type variable_name;
```

### Example

```cpp
int age;
```

Here,

- `int` → Data type
- `age` → Variable name

---

# Variable Initialization

A variable can be assigned a value when it is declared.

```cpp
int age = 20;
```

Or later.

```cpp
int age;
age = 20;
```

---

# Variable Naming Rules

✅ Valid

```cpp
age
studentName
_marks
number1
total_score
```

❌ Invalid

```cpp
1age
student-name
my name
int
```

Rules:

- Must begin with a letter or `_`
- Cannot begin with a number
- Cannot contain spaces
- Cannot contain most special characters
- Cannot use C++ keywords

---

# Data Types

A **data type** specifies:

- What kind of data a variable stores.
- How much memory is allocated.
- What operations can be performed on it.

---

# Integer Types

Used for storing whole numbers.

| Data Type | Description | Example |
|-----------|-------------|---------|
| `short` | Small integer | `100` |
| `int` | Integer | `25` |
| `long` | Large integer | `1000000` |
| `long long` | Very large integer | `1000000000000` |

Example

```cpp
int age = 20;
long long population = 8200000000;
```

---

# Floating-Point Types

Used for storing decimal numbers.

| Data Type | Description | Example |
|-----------|-------------|---------|
| `float` | Single precision | `3.14f` |
| `double` | Double precision | `3.1415926535` |
| `long double` | Extended precision | `3.141592653589793238L` |

Example

```cpp
double pi = 3.1415926535;
```

---

# Character Type

Stores a single character.

| Data Type | Example |
|-----------|---------|
| `char` | `'A'` |

Example

```cpp
char grade = 'A';
```

---

# Boolean Type

Stores logical values.

| Data Type | Values |
|-----------|--------|
| `bool` | `true`, `false` |

Example

```cpp
bool passed = true;
```

---

# String Type

Stores text.

| Data Type | Example |
|-----------|---------|
| `string` | `"Hello"` |

Example

```cpp
string name = "Imran";
```

> **Note:** `string` is provided by the C++ Standard Library and behaves like a built-in type for most beginner programs.

---

# Type Modifiers

Modifiers change the size or range of some data types.

| Modifier | Meaning |
|----------|---------|
| `signed` | Can store positive and negative values |
| `unsigned` | Stores only non-negative values |
| `short` | Smaller integer type |
| `long` | Larger integer type |

Example

```cpp
unsigned int x = 100;
long long y = 1000000000000;
```

---

# Common Data Types Used in Competitive Programming

| Data Type | Typical Use |
|-----------|-------------|
| `int` | Most integer values |
| `long long` | Large integers |
| `double` | Decimal numbers |
| `char` | Single characters |
| `bool` | Logical values |
| `string` | Text |

---

# Reading Input

```cpp
int age;
cin >> age;
```

Multiple inputs

```cpp
int age;
double cgpa;
string name;

cin >> age >> cgpa >> name;
```

---

# Printing Output

```cpp
cout << age;
```

Multiple outputs

```cpp
cout << name << " " << age;
```

---

# Example Program

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {

    string name;
    int age;
    double cgpa;

    cin >> name >> age >> cgpa;

    cout << "Name : " << name << endl;
    cout << "Age  : " << age << endl;
    cout << "CGPA : " << cgpa << endl;

    return 0;
}
```

---

# Common Mistakes

Using an undeclared variable

```cpp
age = 20;
```

Correct

```cpp
int age = 20;
```

---

Using double quotes for a character

```cpp
char grade = "A";
```

Correct

```cpp
char grade = 'A';
```

---

Using single quotes for a string

```cpp
string name = 'Imran';
```

Correct

```cpp
string name = "Imran";
```

---

Using an invalid variable name

```cpp
int 2number;
```

Correct

```cpp
int number2;
```

---

# Practice Problems

1. Read an integer and print it.
2. Read two integers and print their sum.
3. Read your name and age, then print them.
4. Read a character and print it.
5. Read a decimal number and print it.
6. Read a student's name, age, and GPA, then display them.
7. Swap the values of two variables.
8. Read three integers and print their average.
9. Read a boolean (`0` or `1`) and print it.
10. Read your city and favorite number, then print a sentence using both.

---

# Summary

- A **variable** is a named location in memory.
- A **data type** defines what kind of value a variable can store.
- Every variable must be declared before use.
- Choose the appropriate data type based on the values you need to store.
- The most commonly used data types in competitive programming are:
  - `int`
  - `long long`
  - `double`
  - `char`
  - `bool`
  - `string`

### Practice Problems

**Problem 1:**  
Take an integer, a decimal number, and a character as input, then print them on separate lines.

**Problem 2:**  
Take two integers as input and print:
- Their sum
- Their difference
- Their product

---

# Input & Output

Input is used to receive data from the user, and output is used to display results.

### Practice Problems

**Problem 1:**  
Take your name and age as input, then print:

```
Name: ...
Age: ...
```

**Problem 2:**  
Take three integers as input and print them in reverse order.

---

# Operators

Operators are symbols used to perform mathematical, comparison, and logical operations.

# 1. Arithmetic Operators

Used to perform mathematical calculations.

| Operator | Meaning | Example |
|----------|---------|---------|
| `+` | Addition | `a + b` |
| `-` | Subtraction | `a - b` |
| `*` | Multiplication | `a * b` |
| `/` | Division | `a / b` |
| `%` | Modulus (Remainder) | `a % b` |

---

# 2. Assignment Operators

Used to assign values to variables.

| Operator | Meaning | Example |
|----------|---------|---------|
| `=` | Assign | `a = 10` |
| `+=` | Add and assign | `a += 5` |
| `-=` | Subtract and assign | `a -= 5` |
| `*=` | Multiply and assign | `a *= 5` |
| `/=` | Divide and assign | `a /= 5` |
| `%=` | Modulus and assign | `a %= 5` |

---

# 3. Comparison (Relational) Operators

Used to compare two values. The result is either `true` or `false`.

| Operator | Meaning | Example |
|----------|---------|---------|
| `==` | Equal to | `a == b` |
| `!=` | Not equal to | `a != b` |
| `>` | Greater than | `a > b` |
| `<` | Less than | `a < b` |
| `>=` | Greater than or equal to | `a >= b` |
| `<=` | Less than or equal to | `a <= b` |

---

# 4. Logical Operators

Used to combine or negate conditions.

| Operator | Meaning | Example |
|----------|---------|---------|
| `&&` | Logical AND | `a && b` |
| `\|\|` | Logical OR | `a \|\| b` |
| `!` | Logical NOT | `!a` |

---

# 5. Increment & Decrement Operators

Used to increase or decrease a variable by 1.

| Operator | Meaning | Example |
|----------|---------|---------|
| `++` | Increment | `a++`, `++a` |
| `--` | Decrement | `a--`, `--a` |

---

### Practice Problems

**Problem 1:**  
Take two integers and print:
- Addition
- Subtraction
- Multiplication
- Division
- Remainder

**Problem 2:**  
Take two integers and print:
- Whether they are equal
- Whether the first is greater than the second

---

# Conditional Statements (`if`, `else`, `switch`)

Conditional statements allow a program to make decisions based on conditions.

### Practice Problems

**Problem 1:**  
Take an integer and print:
- `Positive`
- `Negative`
- `Zero`

**Problem 2:**  
Take a number from **1 to 7** and print the corresponding day of the week using `switch`.

---

# Loops (`for`, `while`, `do-while`)

Loops are used to repeat a block of code multiple times.

### Practice Problems

**Problem 1:**  
Take an integer `N` and print all numbers from **1 to N**.

**Problem 2:**  
Take an integer `N` and print the sum of all numbers from **1 to N**.

---

# Arrays

An array stores multiple values of the same data type using a single variable.

### Practice Problems

**Problem 1:**  
Take **10 integers** as input.
- Print the sum of all integers on the first line.
- Print all integers separated by spaces on the second line.

**Problem 2:**  
Take `N` integers and print:
- The largest value.
- The smallest value.

---

# Strings

A string is a sequence of characters used to store text.

### Practice Problems

**Problem 1:**  
Take a string as input and print its length.

**Problem 2:**  
Take a string and print it in reverse.

---

# Functions

A function is a reusable block of code that performs a specific task.

### Practice Problems

**Problem 1:**  
Write a function that takes two integers and returns their sum.

**Problem 2:**  
Write a function that takes an integer and returns whether it is even or odd.

---

# Basic Time Complexity (Big O Notation)

Time complexity describes how the running time of an algorithm grows as the input size increases.

### Practice Problems

**Problem 1:**  
Print all numbers from **1 to N** and identify the time complexity.

**Problem 2:**  
Given the following code, determine its time complexity:

```cpp
for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
        cout << i << " " << j << endl;
```