# OOP Laboratory - Lab 3: Dynamic Memory Allocation

**Institution:** International Institute of Information Technology, Bhubaneswar[cite: 2]  
**Department:** Computer Science and Engineering[cite: 2]  
**Semester:** B.Tech 3rd Semester[cite: 2]  
**Section:** CSE B2[cite: 2]  
**Date:** 11.03.2026[cite: 2]  
**Reference Document:** OOP_LAB_3_CSE_B2.pdf[cite: 2]  

------------------------------------------------

## Instructions
- Write all programs in C++[cite: 2].
- Use the `new` operator for dynamic memory allocation wherever required[cite: 2].
- Release all dynamically allocated memory using the appropriate `delete` or `delete []` operator[cite: 2].
- Display the output in a clear and readable format[cite: 2].
- Ensure that dynamically allocated memory is properly deallocated before the program terminates[cite: 2].

------------------------------------------------

## List of Programs

### 1. Dynamic Integer Allocation
Write a C++ program to dynamically allocate memory for a single integer using the `new` operator[cite: 2]. Read an integer from the user, store it in the dynamically allocated memory, display its value, and release the allocated memory using the `delete` operator[cite: 2].

### 2. Dynamic Array of Integers
Write a C++ program to dynamically allocate an array of $n$ integers using the `new` operator (`new int[n]`)[cite: 2]. Read the elements from the user, display them, and release the allocated memory using `delete[]`[cite: 2].

### 3. Find the Largest Element
Write a C++ program that dynamically allocates an array of $n$ integers[cite: 2]. Accept the elements, determine the largest element in the array using pointer access, and properly deallocate the memory after displaying the result[cite: 2].

### 4. Dynamic Array and Average
Write a C++ program that dynamically allocates memory for $n$ floating-point numbers (`new float[n]`)[cite: 2]. Accept the numbers, calculate their sum and average, display the results, and release the memory using `delete[]`[cite: 2].

### 5. Dynamic Object Creation
Create a class named `Student` with Roll Number, Name, and Marks[cite: 2]. Create an object of the class dynamically using `new`[cite: 2]. Implement member functions to accept and display details using the arrow operator (`->`), and release the object using `delete`[cite: 2].

### 6. Array of Dynamic Objects
Create an `Employee` class containing Employee ID, Employee Name, and Salary[cite: 2]. Dynamically allocate memory for an array of $n$ `Employee` objects using `new Employee[n]`[cite: 2]. Accept/display details of all employees and properly deallocate memory using `delete[]`[cite: 2].

### 7. Dynamic Matrix
Write a C++ program to dynamically allocate memory for a 2D matrix of size $m \times n$ using a pointer-to-pointer approach (`int **matrix`)[cite: 2]. Allocate memory for rows first and then for each row[cite: 2]. Accept elements, display the matrix, and properly deallocate all memory[cite: 2].

### 8. Dynamic Student Marks System
Create a `Student` class storing Roll Number, Name, Number of Subjects, and a dynamically allocated array of marks[cite: 2]. Member functions should dynamically allocate memory for marks at runtime, accept marks, calculate total & average, display results, and release memory[cite: 2].

### 9. Dynamic Shopping Cart
Create a `Product` class with Product ID, Product Name, Price, and Quantity[cite: 2]. Dynamically allocate memory for an array of $n$ `Product` objects (where $n$ is entered at runtime)[cite: 2]. Implement functions to accept/display products, calculate the total cart cost, display the total amount, and release memory[cite: 2].

### 10. Dynamic Employee Salary Analysis
Create an `Employee` class with Employee ID, Employee Name, Basic Salary, and a dynamically allocated array for monthly earnings[cite: 2]. Dynamically allocate memory for the number of months entered at runtime, calculate total and average monthly earnings, identify the highest-earning month, display analysis, and deallocate memory[cite: 2].

-----------------------------------------------

## How to Run
To compile and run any of the C++ programs in this repository, use the following commands in your terminal (using g++):
```bash
g++ filename.cpp -o output_executable
./output_executable
