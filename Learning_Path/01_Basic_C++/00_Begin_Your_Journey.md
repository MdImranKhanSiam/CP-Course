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