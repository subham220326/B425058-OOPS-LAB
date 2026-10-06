# OOP Laboratory - Lab 7: Inheritance

**Institution:** International Institute of Information Technology, Bhubaneswar  
**Department:** Computer Science and Engineering  
**Semester:** B.Tech 3rd Semester  
**Group:** B2  
**Date:** 06.10.2026  
**Reference Document:** OOP_LAB_7_CSE_B2.pdf

------------------------------------------------

## Instructions
- Write and execute the C++ program for each problem.
- Use appropriate classes, objects, constructors, and inheritance concepts wherever required.
- Follow the inheritance structure specified in each question.
- Display clear and meaningful output.
- Save all programs in your assigned GitHub repository.
- The repository submission must be completed by 12:00 AM on the same day to receive marks.
- Submit the lab record in the prescribed format.

------------------------------------------------

## List of Programs

### 1. Employee Salary – Multilevel Inheritance

Create a base class `Employee` containing `name` and `basicSalary`. Derive a class `Developer` containing `experience`, and then derive a class `SeniorDeveloper` containing `projectBonus`.

Calculate the final salary using:

$$
\text{Final Salary} = \text{Basic Salary} + \text{Experience Bonus} + \text{Project Bonus}
$$

where:

$$
\text{Experience Bonus} = 5\% \times \text{Basic Salary} \times \text{Experience}
$$

- Use constructors to initialize the data members.
- Display the final salary.
- **Inheritance Structure:** `Employee → Developer → SeniorDeveloper`

### 2. Student Result – Function Overriding

Create a base class `Student` containing `name`, `rollNo`, and a function `calculateResult()`.

Derive two classes:
- `RegularStudent`
- `ScholarshipStudent`

For `RegularStudent`, calculate the total marks normally.

For `ScholarshipStudent`, add **5 bonus marks** to the total.

- Override `calculateResult()` in both derived classes.
- Display the final result.
- **Condition:** The same function should behave differently in the two derived classes.

### 3. Vehicle Rental – Multilevel Inheritance

Create the following inheritance hierarchy:

`Vehicle → Car → LuxuryCar`

The classes should contain:

- `Vehicle`: registration number and number of rental days.
- `Car`: daily rental rate.
- `LuxuryCar`: additional luxury charge per day.

Calculate and display the total rental cost using:

$$
\text{Total Cost} = (\text{Daily Rate} + \text{Luxury Charge}) \times \text{Rental Days}
$$

### 4. Banking System – Hierarchical Inheritance

Create a base class `BankAccount` containing:
- Account number
- Balance

Derive two classes:
- `SavingsAccount`
- `CurrentAccount`

For `SavingsAccount`:
- Add interest to the balance.

For `CurrentAccount`:
- Deduct a maintenance charge if the balance is below the specified minimum balance.

Display the updated balance for both account types.

- **Condition:** Both derived classes should inherit from the same base class.

### 5. Student Performance – Multiple Inheritance

Create two base classes:
- `Academic`
- `Sports`

The `Academic` class should store marks in three academic subjects.

The `Sports` class should store sports marks.

Derive a class `StudentResult` from both classes.

Calculate:

$$
\text{Total} = \text{Academic Marks} + \text{Sports Marks}
$$

and

$$
\text{Average} = \frac{\text{Total}}{4}
$$

- Use constructors in all three classes.
- Display the complete result.
- **Condition:** The derived class should inherit data from both `Academic` and `Sports`.

### 6. Resolving Ambiguity in Multiple Inheritance

Create two base classes:
- `InternalExam`
- `ExternalExam`

Both classes must contain a function named `display()`.

Derive a class `FinalResult` from both classes.

- Call the appropriate `display()` function from `FinalResult`.
- Resolve the ambiguity using the scope resolution operator.
- **Hint:** Use the form:

```cpp
BaseClassName::functionName();
