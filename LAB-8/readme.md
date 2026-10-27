# OOP Laboratory - Lab 8: Function Overriding

**Institution:** International Institute of Information Technology, Bhubaneswar  
**Department:** Computer Science and Engineering  
**Semester:** B.Tech 3rd Semester  
**Group:** B2  
**Date:** 27.10.2026  
**Reference Document:** OOP_LAB_8_CSE_B2.pdf

------------------------------------------------

## Instructions

- Write and execute the C++ program for each problem.
- Use inheritance and function overriding wherever required.
- Match the function signatures in the base and derived classes.
- Display clear and meaningful output.
- Use virtual functions and base-class pointers or references wherever specified.
- Save all programs in your assigned GitHub repository.
- The repository submission must be completed by 12:00 AM on the same day to receive marks.
- Submit the lab record in the prescribed format.

------------------------------------------------

## List of Programs

### 1. Game Character Battle

Create a base class `Character` with a function `attack()`.

Derive two classes:

- `Warrior`
- `Archer`

Override `attack()` to calculate the damage dealt using:

$$
\text{Warrior Damage} = 20 + 2 \times \text{Strength}
$$

$$
\text{Archer Damage} = 15 + 3 \times \text{Agility}
$$

- Display the damage dealt by each character.

### 2. Smart Parking Fee Calculator

Create a base class `ParkingSlot` with a function `calculateFee(int hours)`.

Derive two classes:

- `TwoWheelerSlot`: parking rate of **Rs. 10 per hour**.
- `FourWheelerSlot`: parking rate of **Rs. 30 per hour**.

Override `calculateFee()` to calculate the parking fee using:

$$
\text{Total Fee} = \text{Hourly Rate} \times \text{Hours}
$$

- If the vehicle stays for **more than 5 hours**, apply a **10% discount** to the total fee.
- Display the final fee for each vehicle type.

### 3. File Compression Simulator

Create a base class `Compressor` with a function `compress(double fileSize)`.

Derive two classes:

- `TextCompressor`
- `ImageCompressor`

Override `compress()` to calculate the compressed file size using:

$$
\text{Compressed Text Size} = 40\% \times \text{Original File Size}
$$

$$
\text{Compressed Image Size} = 70\% \times \text{Original File Size}
$$

- Text files retain **40%** of their original size.
- Image files retain **70%** of their original size.
- Display the original and compressed file sizes.

### 4. Food Delivery Time Estimator

Create a base class `Delivery` with a function `estimateTime(double distance)`.

Derive two classes:

- `BikeDelivery`: speed of **20 km/h**, with an additional **5 minutes** for traffic.
- `DroneDelivery`: speed of **40 km/h**, with an additional **2 minutes** for take-off and landing.

Override `estimateTime()` to calculate the delivery time in minutes using:

$$
\text{Bike Delivery Time} = \frac{\text{Distance}}{20} \times 60 + 5
$$

$$
\text{Drone Delivery Time} = \frac{\text{Distance}}{40} \times 60 + 2
$$

- Assume the distance is given in kilometres.
- Display the estimated time in minutes for each delivery type.

### 5. Smart Irrigation Controller

Create a base class `IrrigationSystem` with a function `calculateWater(double moisture)`.

Derive two classes:

- `DripIrrigation`
- `SprinklerIrrigation`

Override `calculateWater()` to calculate the required water using:

$$
\text{Drip Irrigation Water} = 2 \times (100 - \text{Moisture})
$$

$$
\text{Sprinkler Irrigation Water} = 3 \times (100 - \text{Moisture})
$$

- Assume soil moisture is given as a percentage between **0 and 100**.
- Display the required water in litres for each system.

### 6. Cybersecurity Threat Scanner

Create a base class `SecurityScanner` with a function `scan(int threats)`.

Derive two classes:

- `BasicScanner`
- `AdvancedScanner`

Override `scan()` in both derived classes.

For `BasicScanner`:

- Report the number of threats detected.

For `AdvancedScanner`:

- Report the number of threats detected.
- Remove **90%** of the detected threats and report the number remaining.

- Display the results for both scanners.

### 7. Cricket Target Calculator

Create a base class `MatchFormat` with a function `calculateTarget(int firstInningsScore)`.

Derive two classes:

- `T20Match`: required run margin of **1%** of the first-innings score.
- `ODIMatch`: required run margin of **2%** of the first-innings score.

Override `calculateTarget()` to calculate the target score using:

$$
\text{T20 Target} = \text{First Innings Score} + \left\lceil 0.01 \times \text{First Innings Score} \right\rceil
$$

$$
\text{ODI Target} = \text{First Innings Score} + \left\lceil 0.02 \times \text{First Innings Score} \right\rceil
$$

- Round the required run margin up to the next integer when necessary.
- Display the target score for each format.

### 8. Cloud Resource Cost Calculator

Create a base class `CloudResource` with a function `calculateCost(double cpuHours)`.

Derive two classes:

- `StandardInstance`: rate of **Rs. 5 per CPU-hour**.
- `PremiumInstance`: rate of **Rs. 12 per CPU-hour**.

Override `calculateCost()` to calculate the resource cost using:

$$
\text{Total Cost} = \text{Rate per CPU-Hour} \times \text{CPU Hours}
$$

- If CPU usage **exceeds 100 hours**, apply a **15% discount** to the total cost.
- Display the final cost for each instance.

### 9. Robot Navigation System

Create a base class `Robot` with a **virtual** function `move(double distance)`.

Derive two classes:

- `WheeledRobot`: speed of **2 m/s**.
- `TrackedRobot`: speed of **1.2 m/s**.

Override `move()` to calculate the travel time using:

$$
\text{Travel Time} = \frac{\text{Distance}}{\text{Speed}}
$$

- Assume the distance is given in metres and display the travel time in seconds.
- Create base-class pointers to the derived objects.
- Call `move()` through these pointers to demonstrate **runtime polymorphism**.

### 10. AI Recommendation Engine

Create a base class `Recommender` with a **virtual** function `generateRecommendation(int userRating, int popularity)`.

Derive two classes:

- `PersonalizedRecommender`
- `TrendingRecommender`

Override `generateRecommendation()` in both derived classes.

For `PersonalizedRecommender`, calculate the score using:

$$
\text{Personalized Score} = 0.7 \times \text{User Rating} + 0.3 \times \text{Popularity}
$$

For `TrendingRecommender`, calculate the score using:

$$
\text{Trending Score} = 0.3 \times \text{User Rating} + 0.7 \times \text{Popularity}
$$

- Assume both inputs are scores between **0 and 100**.
- Create a base-class pointer to each derived object.
- Invoke the function through these pointers to display the recommendation score and demonstrate **runtime polymorphism**.

------------------------------------------------

## How to Run

To compile and run any of the C++ programs in this repository, use the following commands in your terminal using `g++`:

```bash
g++ filename.cpp -o output_executable
./output_executable
```

