# OOP Laboratory - Lab 3: Dynamic Memory Allocation

**Institution:** International Institute of Information Technology, Bhubaneswar  
**Department:** Computer Science and Engineering  
**Semester:** B.Tech 3rd Semester  
**Section:** CSE B2  
**Date:** 11.03.2026  
**Reference Document:** OOP_LAB_3_CSE_B2.pdf  

------------------------------------------------

## Instructions
- Write all programs in C++.
- Use the `new` operator for dynamic memory allocation wherever required.
- Release all dynamically allocated memory using the appropriate `delete` or `delete []` operator.
- Display the output in a clear and readable format.
- Ensure that dynamically allocated memory is properly deallocated before the program terminates.

------------------------------------------------

## List of Programs

### 1. Dynamic Integer Allocation
Write a C++ program to dynamically allocate memory for a single integer using the `new` operator. Read an integer from the user, store it in the dynamically allocated memory, display its value, and release the allocated memory using the `delete` operator.

### 2. Dynamic Array of Integers
Write a C++ program to dynamically allocate an array of $n$ integers using the `new` operator (`new int[n]`). Read the elements from the user, display them, and release the allocated memory using `delete[]`.

### 3. Find the Largest Element
Write a C++ program that dynamically allocates an array of $n$ integers. Accept the elements, determine the largest element in the array using pointer access, and properly deallocate the memory after displaying the result.

### 4. Dynamic Array and Average
Write a C++ program that dynamically allocates memory for $n$ floating-point numbers (`new float[n]`). Accept the numbers, calculate their sum and average, display the results, and release the memory using `delete[]`.

### 5. Dynamic Object Creation
Create a class named `Student` with Roll Number, Name, and Marks. Create an object of the class dynamically using `new`. Implement member functions to accept and display details using the arrow operator (`->`), and release the object using `delete`.

### 6. Array of Dynamic Objects
Create an `Employee` class containing Employee ID, Employee Name, and Salary. Dynamically allocate memory for an array of $n$ `Employee` objects using `new Employee[n]`. Accept/display details of all employees and properly deallocate memory using `delete[]`.

### 7. Dynamic Matrix
Write a C++ program to dynamically allocate memory for a 2D matrix of size $m \times n$ using a pointer-to-pointer approach (`int **matrix`). Allocate memory for rows first and then for each row. Accept elements, display the matrix, and properly deallocate all memory.

### 8. Dynamic Student Marks System
Create a `Student` class storing Roll Number, Name, Number of Subjects, and a dynamically allocated array of marks. Member functions should dynamically allocate memory for marks at runtime, accept marks, calculate total & average, display results, and release memory.

### 9. Dynamic Shopping Cart
Create a `Product` class with Product ID, Product Name, Price, and Quantity. Dynamically allocate memory for an array of $n$ `Product` objects (where $n$ is entered at runtime). Implement functions to accept/display products, calculate the total cart cost, display the total amount, and release memory.

### 10. Dynamic Employee Salary Analysis
Create an `Employee` class with Employee ID, Employee Name, Basic Salary, and a dynamically allocated array for monthly earnings. Dynamically allocate memory for the number of months entered at runtime, calculate total and average monthly earnings, identify the highest-earning month, display analysis, and deallocate memory.

-----------------------------------------------

## How to Run
To compile and run any of the C++ programs in this repository, use the following commands in your terminal (using g++):
```bash
g++ filename.cpp -o output_executable
./output_executable
