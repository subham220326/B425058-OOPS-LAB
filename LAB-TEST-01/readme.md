# OOP Laboratory - Lab-Test-01: Test on C++ Pointers (Set B)

**Institution:** International Institute of Information Technology, Bhubaneswar  
**Department:** Computer Science and Engineering  
**Semester:** B.Tech 3rd Semester  
**Group:** 2  
**Date:** 01.09.2026  
**Reference Document:** OOP_LAB_6_B2_SET_B.pdf  

------------------------------------------------

## Instructions
- Write all programs in C++.
- Use pointers wherever required in each question.
- Use pointer dereferencing and pointer arithmetic appropriately.
- Do not use array indexing where explicitly restricted.
- Properly release dynamically allocated memory using `delete` or `delete[]`.
- Display the output in a clear and readable format.

------------------------------------------------

## List of Programs

### 1. Mobile Battery Update
A mobile phone stores its battery percentage in a variable.  
Create a pointer to the battery percentage. Using the pointer:
- Display the current battery percentage.
- Increase it after charging.
- Display the updated percentage.  
**Condition:** Modify the battery percentage only through the pointer.

### 2. Water Tank Level
A smart water tank stores its current water level.  
Create a pointer pointing to the water level. Using the pointer:
- Display the current level.
- Add an amount of water.
- Remove an amount of water.
- Display the final water level.

### 3. Sports Equipment Rack
A sports centre stores the identification numbers of 6 pieces of equipment in an array.  
Using a pointer:
- Display all equipment IDs.
- Display the address of each element.  
**Condition:** Move through the array using pointer arithmetic.

### 4. Train Seat Correction
A railway system stores 8 seat numbers in an array. A seat number at a position entered by the user was recorded incorrectly.  
- Use pointer arithmetic to update that seat number.  
- Display the list before and after correction.  
**Condition:** Do not use `arr[position]`.

### 5. Online Order Status
An online shopping system stores an order status code:
- $1 =$ Processing
- $2 =$ Shipped
- $3 =$ Delivered  
Write a function:
```cpp
void updateStatus(int *status);
```
The function should update:
- Processing $\rightarrow$ Shipped
- Shipped $\rightarrow$ Delivered  
Display the status before and after calling the function.

### 6. Podcast Duration Analyzer
A podcast application stores the duration of 6 episodes.  
Write a function that receives:
- A pointer to the first duration.
- The number of episodes.  
Using pointer traversal, find and display the longest episode duration.  
**Condition:** Do not use array indexing inside the function.

### 7. Text Analyzer
A note-taking application stores a sentence in a character array.  
Using a character pointer, count:
- Number of digits.
- Number of alphabetic characters.
- Number of spaces.  
Traverse the string until `'\0'`.

### 8. Classroom Marks Update
A teacher stores the marks of $n$ students in an array.  
Write a function that receives a pointer to the marks and the number of students. The function should add 5 marks to every student.  
Display the marks before and after modification.  
**Condition:** Modify the original array using pointers.

### 9. Restaurant Table Manager
A restaurant does not know in advance how many table numbers will be entered.  
Write a program that:
- Dynamically allocates memory for $n$ table numbers.
- Accepts all table numbers.
- Finds the smallest table number using pointer traversal.
- Releases the dynamically allocated memory.

### 10. Contact Number Search
A company stores a variable number of contact numbers.  
Write a program that:
- Dynamically allocates memory for $n$ contact numbers.
- Accepts the contact numbers.
- Searches for a specified contact number using a pointer.
- Displays whether it is found and its position.
- Properly deallocates the allocated memory.  
**Condition:** Do not use array indexing while searching.

------------------------------------------------

## How to Run
To compile and run any of the C++ programs in this repository, use the following commands in your terminal (using g++):
```bash
g++ filename.cpp -o output_executable
./output_executable
```
