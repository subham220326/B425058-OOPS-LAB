# OOP Laboratory - Lab 2: Classes, Objects, and Member Functions

**Institution:** International Institute of Information Technology, Bhubaneswar  
**Department:** Computer Science and Engineering  
**Semester:** B.Tech 3rd Semester  
**Section:** CSE B2  
**Date:** 04.08.2026  
**Reference Document:** OOP_LAB_2_CSE_B2.pdf

------------------------------------------------

## Instructions
- Write all programs in C++.
- Use classes and objects in every program.
- Implement the required functionality using member functions.
- Display the output in a neat and readable format.
- Use appropriate data types and meaningful variable names.

------------------------------------------------

## List of Programs

### 1. Student Information System
Create a class named `Student` to store Roll Number, Name, and Marks. Include member functions to accept details from the user and display them in a formatted manner.

### 2. Rectangle Calculator
Design a class `Rectangle` with length and breadth. Include functions to read dimensions, calculate the area, calculate the perimeter, and display all results.

### 3. Simple Calculator
Create a class `Calculator` to perform basic arithmetic operations (Addition, Subtraction, Multiplication, Division) on two numbers. Includes a check to ensure the second number is not zero before division.

### 4. Bank Account Management
Design a class `BankAccount` with Account Number, Account Holder Name, and Balance. Include functions to enter details, deposit money, withdraw money (with sufficient balance check), and display updated details.

### 5. Employee Salary Calculator
Create an `Employee` class with Employee ID, Employee Name, and Basic Salary. Calculate HRA (20% of Basic), DA (10% of Basic), and Gross Salary.

### 6. Distance Addition
Create a `Distance` class with Feet and Inches. Write functions to input two distances, add them (converting inches to feet if $\ge$ 12), and display the final distance.

### 7. Product Inventory Management
Design a `Product` class with Product ID, Product Name, Quantity Available, and Price per Unit. Include functions to accept/display details, update quantity after sales (checking stock availability), and calculate total inventory value.

### 8. Library Book Management System
Create a `LibraryBook` class for book issue/return tracking. Calculates fines based on the rule: no fine for the first 15 days, and ₹2 per day for each additional day.

### 9. Student Result Processing System
Create a `StudentResult` class for a student with Roll Number, Name, and marks in 5 subjects (100 marks each). Calculate Total Marks, Percentage, and assign grades from A to F based on specified criteria.

### 10. Electricity Bill Generator
Create an `ElectricityBill` class with Consumer Number, Name, and Units Consumed. Calculate bills based on slab rates: 
- First 100 units: ₹5 per unit
- Next 100 units: ₹7 per unit
- Above 200 units: ₹10 per unit

-----------------------------------------------

## How to Run
To compile and run any of the C++ programs in this repository, use the following commands in your terminal (using g++):
```bash
g++ filename.cpp -o output_executable
./output_executable
```
