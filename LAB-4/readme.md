# OOP Laboratory - Lab 4: Constructors, Destructors, and Friend Functions

**Institution:** International Institute of Information Technology, Bhubaneswar  
**Department:** Computer Science and Engineering  
**Semester:** B.Tech 3rd Semester  
**Section:** CSE B2  
**Date:** 18.03.2026  
**Reference Document:** OOP_LAB_4_CSE_B2.pdf  

------------------------------------------------

## Instructions
- Write all programs in C++.
- Implement appropriate constructors (Default, Parameterized, Copy) and destructors wherever required.
- Use `friend` functions and `friend` classes to handle cross-class data access and operations.
- Ensure proper resource management and dynamic memory deallocation inside destructors.
- Format all terminal outputs clearly with appropriate labels.

------------------------------------------------

## List of Programs

### 1. Default and Parameterized Constructors
Create a `Rectangle` class with length and breadth as private members. Implement a default constructor to initialize dimensions to zero and a parameterized constructor to assign user-defined values. Include member functions to compute and display the area.

### 2. Copy Constructor and Deep vs. Shallow Copy
Create a `Book` class containing title, author, and dynamic memory for price. Implement a parameterized constructor, a custom copy constructor to perform deep copy, and a destructor to release allocated memory. Demonstrate the difference between deep and shallow copies.

### 3. Constructor Overloading
Create a `Complex` class with real and imaginary parts. Overload constructors to initialize:
- An object with default zero values
- An object with a single value (real = imag)
- An object with distinct real and imaginary values  
Display the complex numbers in `a + ib` format.

### 4. Destructor Invocation and Object Lifetimes
Create a `Tracker` class that prints distinct messages on object creation and destruction. Demonstrate the exact order of constructor and destructor calls for local, global, dynamic, and static objects within nested scopes.

### 5. Dynamic Constructor
Create a `StringHandler` class that dynamically allocates memory for a character array using a dynamic constructor based on string length at runtime. Include functions to concatenate two strings and release memory inside the destructor.

### 6. Friend Function for Two Classes
Create two classes, `DM` (stores distances in meters and centimeters) and `DB` (stores distances in feet and inches). Write a friend function that adds one object of `DM` with one object of `DB` and returns the result in the specified unit system.

### 7. Friend Function for Private Data Comparison
Create classes `AccountA` and `AccountB` representing balances in two separate banking modules. Implement a common friend function to compare balances and identify the account with the higher balance without violating encapsulation.

### 8. Friend Class Implementation
Create a `TrainSeat` class containing private members: Seat Number, Passenger Name, and Booking Status. Create a `TicketChecker` class declared as a `friend` class of `TrainSeat` to inspect seat status, display passenger details, and verify availability.

### 9. Matrix Operations using Friend Functions
Create a `Matrix` class with a 2D dynamic array. Use constructors for allocation/initialization and destructors for cleanup. Implement friend functions to perform matrix addition and multiplication.

### 10. Complex Number Arithmetic with Friend Functions
Create a `Complex` class. Implement friend functions to add, subtract, and multiply two complex numbers, returning a new `Complex` object for each operation and displaying the results.

------------------------------------------------

## How to Run
To compile and run any of the C++ programs in this repository, use the following commands in your terminal (using g++):
```bash
g++ filename.cpp -o output_executable
./output_executable
