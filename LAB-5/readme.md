# OOP Laboratory - Lab 5: Function Overloading

**Institution:** International Institute of Information Technology, Bhubaneswar  
**Department:** Computer Science and Engineering  
**Semester:** B.Tech 3rd Semester  
**Section:** CSE B2  
**Date:** 25.08.2026  
**Reference Document:** OOP_LAB_5_B2.pdf  

------------------------------------------------

## Instructions
- Write all programs in C++.
- Use function overloading to solve each problem.
- Use the same function name for the overloaded versions.
- Differentiate overloaded functions using the number, type, or order of parameters.
- Arrays and pointers may be used as function parameters wherever required.
- Display the output in a neat and readable format.
- Do not create separate function names for operations that are required to demonstrate overloading.

------------------------------------------------

## List of Programs

### 1. Number Calculator
Write a C++ program to perform a calculation using overloaded functions for:
- Two integer values
- Three integer values
- Two floating-point values  
Display the result for each case.

### 2. Value Comparison
Write a C++ program to find the larger value using an overloaded function. The program should be able to compare:
- Two integers
- Two floating-point numbers
- Three integers  
Display the appropriate result for each case.

### 3. Array Total
Write a C++ program to calculate the total of elements using an overloaded function. The program should work with:
- An integer array
- A floating-point array
- A portion of an integer array specified by the number of elements to consider  
Display the calculated total in each case.

### 4. Element Search
Write a C++ program to search for an element using an overloaded function. The program should support:
- Searching for an integer in an integer array
- Searching for a character in a character array
- Searching for an integer only within a specified range of an integer array  
Display the position of the element if it is found; otherwise, display an appropriate message.

### 5. Modify a Value
Write a C++ program to modify data using overloaded functions. The program should:
- Add a specified value to an integer
- Add a specified value to a floating-point number
- Modify an integer value using its pointer  
Display the value before and after modification.

### 6. Display Data
Write a C++ program using function overloading to display:
- An integer
- A floating-point number
- A character
- All elements of an integer array
- All elements of a character array  
Use a common function name for displaying all types of data.

### 7. Compare Data Sets
Write a C++ program using overloaded functions to compare:
- Two integers
- Two floating-point numbers
- Two integer arrays of equal size  
For individual values, display the larger value. For arrays, determine whether both arrays contain identical elements.

### 8. Counting Operation
Write a C++ program using overloaded functions to perform the following:
- Count the number of digits in an integer
- Count the number of elements in an integer array
- Count the occurrences of a given character in a character array  
Display the result of each operation.

### 9. Maximum Value Finder
Write a C++ program using function overloading to find the maximum value in the following cases:
- Between two integers
- Between two values accessed through integer pointers
- Among all elements of an integer array using a pointer and its size  
Display the maximum value for each case.

### 10. Overloaded Data Processor
Write a C++ program that performs a common meaningful operation using overloaded functions for the following inputs:
- Two integers
- An integer and a floating-point value
- Two floating-point values
- An integer array and its size
- Two integer pointers  
The operation should produce a meaningful result for every case. Demonstrate all overloaded versions from `main()`.

------------------------------------------------

## How to Run
To compile and run any of the C++ programs in this repository, use the following commands in your terminal (using g++):
```bash
g++ filename.cpp -o output_executable
./output_executable
