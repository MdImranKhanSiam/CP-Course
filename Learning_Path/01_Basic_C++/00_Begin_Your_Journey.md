# Module 1: C++ Fundamentals

Learn the basics of programming and the C++ language. This module builds the foundation needed for problem solving and competitive programming.

### Practice At Home For Beginners

https://www.geeksforgeeks.org/cpp/cpp-programming-examples/

( From Basic C++ Programs To C++ Conversion Programs )

---

# Introduction to Programming

Programming is the process of writing instructions that tells a computer what to do. These instructions are called **programs**.


---

# Structure of a C++ Program

```cpp
#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    //Start writing your code here

    return 0;
}
```



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
- Semester
- Student ID
- University

Each on a new line.

---



### Practice Problems

**Problem 1:**  
Write a C++ program that prints `Welcome to C++`.

**Problem 2:**  
Write a program that prints your name three times using three different `cout` statements.

---











# Variables & Data Types

Variables are used to store data. Different data types are used to store different kinds of values.

---

### Practice Problems

**Problem 1:**  
Take an integer, a decimal number, and a character as input, then print them on separate lines.

**Problem 2:**  
Take two integers as input and print:
- Their sum
- Their difference
- Their product



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

# Practice At Home

1. Input your name and print Hello, <name>!.
2. Read two integers and print their sum.
3. Input two floating-point numbers and print their average.
4. Read a character and print it.
5. Read a decimal number and print it.
6. Read a student's name, age, and GPA, then display them.
7. Calculate the area and perimeter of a rectangle.
8. Read three integers and print their average.
9. Read a boolean (`0` or `1`) and print it.
10. Read your city and favorite number, then print a sentence using both.
11. Input an integer and print its square and cube.
12. Convert centimeters to meters.
13. Convert Celsius to Fahrenheit.
14. Swap two variables using a temporary variable.
15. Swap two variables without using a temporary variable.
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

# Practice At Home


### Problem 1: Echo

Read an integer from the user and print the same integer without making any changes.

### Problem 2: Reverse Order

Read two integers and print them in the opposite order.

### Problem 3: Sum of Three

Read three integers, calculate their total, and print the sum.

### Problem 4: ASCII Value

Read a single character and print its ASCII value.

### Problem 5: ASCII Character

Read an integer representing an ASCII code and print the corresponding character.

### Problem 6: Introduction

Read a person's name and age. Print a short introduction such as `My name is Alice and I am 20 years old.`

### Problem 7: Average of Five

Read five integers, calculate their average, and print the result.

### Problem 8: Two Decimal Places

Read a floating-point number and print it rounded to exactly two digits after the decimal point.

### Problem 9: Student Information

Read a student's name, age, and GPA. Display the information in a clear and readable format.

### Problem 10: You Entered

Read an integer and print the sentence `You entered: N`, where `N` is the given number.


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


# Practice At Home

### Problem 1: Arithmetic Operations

Read two integers. Print their addition, subtraction, multiplication, integer division, and remainder.

### Problem 3: Remainder

Read two integers and print the remainder when the first number is divided by the second.

### Problem 4: Average

Read three numbers, calculate their average using arithmetic operators, and print it.

### Problem 5: Simple Interest

Read principal, rate, and time. Calculate the simple interest using `(P × R × T) / 100` and print it.

### Problem 6: Divisible by 3 and 5

Read an integer. Print `YES` if it is divisible by both 3 and 5; otherwise print `NO`.

### Problem 7: Range Check

Read an integer and determine whether it lies between 1 and 100 inclusive.

### Problem 8: Larger Number

Read two integers and use the ternary operator (`?:`) to print the larger value.

### Problem 9: Increment and Decrement

Read an integer. Increase it by one, print it, then decrease it by one and print it again.

### Problem 10: Expression Evaluation

Read three integers `a`, `b`, and `c`. Calculate `(a + b) * c` and print the answer.

---










# Conditional Statements (`if`, `else`, `switch`)

Conditional statements allow a program to make decisions based on conditions.

### Practice Problems

**Problem 1:**  
Take an integer input from user. If the integer is even, print Even and if the integer is odd, print Odd

**Problem 2:**  
Check whether a number is positive, negative, or zero.

**Problem 2:**  
Take a number from **1 to 7** and print the corresponding day of the week using `switch`.

---


# Practice At Home

### Problem 1: Positive, Negative or Zero

Read an integer. Print `Positive` if it is greater than zero, `Negative` if it is less than zero, otherwise print `Zero`.

### Problem 2: Largest of Two

Read two integers and print the larger number.

### Problem 3: Largest of Three

Read three integers and print the largest among them.

### Problem 4: Pass or Fail

Read a student's marks. Print `Pass` if the marks are at least 40, otherwise print `Fail`.

### Problem 5: Grade Calculator

Read a student's marks and print the grade using the following rules:

- 80–100 → A+
- 70–79 → A
- 60–69 → A-
- 50–59 → B
- 40–49 → C
- Below 40 → F

### Problem 6: Leap Year

Read a year. Print `Leap Year` if it is a leap year; otherwise print `Not Leap Year`.

### Problem 7: Vowel or Consonant

Read a lowercase English letter. Print `Vowel` if it is one of `a, e, i, o, u`; otherwise print `Consonant`.

### Problem 8: Number Sign

Read an integer and print whether it is `Positive`, `Negative`, or `Zero` using `if-else`.

### Problem 9: Day of Week

Read a number from 1 to 7 and use `switch` to print the corresponding weekday. Print `Invalid` for any other number.

### Problem 10: Simple Calculator

Read two numbers and an operator (`+`, `-`, `*`, `/`). Use `switch` to perform the operation and print the result.


---









# Loops (`for`, `while`, `do-while`)

Loops are used to repeat a block of code multiple times.

### Practice Problems

**Problem 1:**  
Take an integer `N` and print all numbers from **1 to N**.

**Problem 2:**  
Take an integer `N` and print the sum of all numbers from **1 to N**.

---


# Practice At Home

### Problem 1: Print 1 to N

Read an integer `N` and print all numbers from 1 to `N`.

### Problem 2: Print N to 1

Read an integer `N` and print all numbers from `N` down to 1.

### Problem 3: Sum of First N Numbers

Read `N`. Calculate and print the sum of the first `N` natural numbers.

### Problem 4: Multiplication Table

Read an integer and print its multiplication table from 1 to 10.

### Problem 5: Even Numbers

Read `N` and print all even numbers from 1 to `N`.

### Problem 6: Count Digits

Read an integer and count how many digits it contains.

### Problem 7: Reverse a Number

Read an integer and print its digits in reverse order.

### Problem 8: Factorial

Read an integer `N` and calculate `N!`.

### Problem 9: Fibonacci Series

Read `N` and print the first `N` Fibonacci numbers.

### Problem 10: Prime Number

Read an integer and determine whether it is prime.

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


# Practice At Home

### Problem 1: Input and Output

Read 5 integers into an array and print them.

### Problem 2: Sum of Array

Read `N` integers and print their sum.

### Problem 3: Find Maximum

Read an array and print its largest element.

### Problem 4: Find Minimum

Read an array and print its smallest element.

### Problem 5: Average of Array

Read an array and print the average of all elements.

### Problem 6: Reverse Array

Read an array and print its elements in reverse order.

### Problem 7: Count Even Numbers

Read an array and count how many elements are even.

### Problem 8: Linear Search

Read an array and a target value. Print `Found` if the value exists; otherwise print `Not Found`.

### Problem 9: Second Largest

Read an array and print the second largest element.

### Problem 10: Frequency of an Element

Read an array and a number. Count how many times the number appears.

---









# Strings

A string is a sequence of characters used to store text.

### Practice Problems

**Problem 1:**  
Take a string as input and print its length.

**Problem 2:**  
Take a string and print it in reverse.

---


# Practice At Home

### Problem 1: String Length

Read a string and print its length.

### Problem 2: Print Characters

Read a string and print each character on a new line.

### Problem 3: Count Vowels

Read a string and count the number of vowels.

### Problem 4: Count Consonants

Read a string and count the number of consonants.

### Problem 5: Reverse String

Read a string and print it in reverse.

### Problem 6: Palindrome

Read a string and determine whether it is a palindrome.

### Problem 7: Uppercase to Lowercase

Read a string and convert all uppercase letters to lowercase.

### Problem 8: Lowercase to Uppercase

Read a string and convert all lowercase letters to uppercase.

### Problem 9: Count Words

Read a full sentence and count the number of words.

### Problem 10: Compare Strings

Read two strings and print whether they are equal.

---








# Functions

A function is a reusable block of code that performs a specific task.

### Practice Problems

**Problem 1:**  
Write a function that takes two integers and returns their sum.

**Problem 2:**  
Write a function that takes an integer and returns whether it is even or odd.

---

# Practice At Home

### Problem 1: Print Hello

Write a function that prints `Hello, World!` and call it from `main()`.

### Problem 2: Sum Function

Write a function that takes two integers and returns their sum.

### Problem 3: Maximum Function

Write a function that returns the larger of two integers.

### Problem 4: Even or Odd Function

Write a function that returns whether a number is even.

### Problem 5: Square Function

Write a function that returns the square of a number.

### Problem 6: Factorial Function

Write a function that calculates and returns the factorial of a number.

### Problem 7: Prime Function

Write a function that returns whether a number is prime.

### Problem 8: Swap Function

Write a function that swaps two integers using reference parameters.

### Problem 9: Average Function

Write a function that takes an array and its size, then returns the average of its elements.

### Problem 10: Power Function

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