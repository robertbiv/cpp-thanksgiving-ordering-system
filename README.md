# C++ Thanksgiving Day Smorgasbord Ordering System
## Overview

This repository contains C++ programming projects and exercises.

## Current Content

### Homework 7 - Thanksgiving Day Smorgasbord

A C++ console application that simulates a FREE Thanksgiving Day Smorgasbord ordering system.

**Author:** Robert Bennethum  
**Course:** CMPSC 121  
**Due Date:** December 10, 2021

#### Features

- Interactive menu system with 16 food items organized into categories:
  - **Entrees:** Turkey, Ham, Salmon, Vegetarian Lasagna
  - **Side Dishes:** Mashed Potatoes, Stuffing, Creamed Corn, Tossed Salad
  - **Desserts:** Pumpkin Pie, Apple Pie, Chocolate Cake, Ice Cream
  - **Beverages:** Coffee, Tea, Water, Soda

- Dynamic memory allocation for user cart
- Input validation
- Order summary display

#### Technical Highlights

- Uses dynamic arrays with proper memory management
- Input validation and error handling
- Modular design with separate functions for different tasks
- Demonstrates C++ fundamentals including:
  - Dynamic memory allocation (`new` and `delete`)
  - Arrays and pointers
  - Functions and function prototypes
  - User input validation

## Building and Running

### Prerequisites

- C++ compiler (Visual Studio 2019 or later recommended)
- Windows OS (project uses Visual Studio project files)

### Build Instructions

#### Using Visual Studio

1. Open `homework7.vcxproj` in Visual Studio
2. Build the solution (F7 or Build > Build Solution)
3. Run the application (F5 or Debug > Start Debugging)

#### Using Command Line (with Visual Studio installed)

```bash
# Open Visual Studio Developer Command Prompt
msbuild homework7.vcxproj /p:Configuration=Release
```

#### Using g++ (Linux/Mac)

```bash
g++ -o homework7 homework7.cpp
./homework7
```

## Usage

1. Run the application
2. View the menu of available items
3. Enter the number of items you want to order
4. Select each item by entering its corresponding number (1-16)
5. Review your order summary

### Example Session

```
*********************************************************

 FREE Thanksgiving Day Smorgasbord! 

*********************************************************

Entrees:
1) Turkey
2) Ham
3) Salmon
4) Vegetarian Lasagna

[... menu continues ...]

How many items would you like to order?: 3

Enter your selected menu items below: 
Item 1#: 1
Item 2#: 5
Item 3#: 9

Order Summary: 
1 Turkey
1 Mashed Potatoes
1 Pumpkin Pie

!!! Enjoy !!!
```

## Project Structure

```
.
├── homework7.cpp              # Main source file
├── homework7.vcxproj          # Visual Studio project file
├── homework7.vcxproj.filters  # Visual Studio filters
├── homework7.vcxproj.user     # Visual Studio user settings
├── Debug/                     # Debug build output
└── README.md                  # This file
```

## Functions

- `main()` - Program entry point, manages the ordering workflow
- `answerCheck(int option, int runningTotal)` - Validates user input
- `printMenu(string MENU[])` - Displays the categorized menu
- `addToCart(string MENU[], string userCart[], int runningTotal, int itemNumber)` - Adds selected items to cart
- `printCart(string userCart[], int totalItems)` - Displays the order summary

## License

Educational project - all rights reserved to the author.

## Contact

**Robert Bennethum**  
Email: rmb6287@psu.edu
