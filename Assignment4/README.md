# Person and Address Management System

## Overview
This project is developed as part of the COSC 350 - Advanced Algorithms and Data Structures course at Columbia College of Missouri. It demonstrates the use of C++ classes to model real-world entities and their interactions. The project utilizes two main classes, `Person` and `Address`, to manage personal information in a structured way. This README provides an overview of the project structure, setup, and compilation instructions.

## Instructor
Professor Randall Hutton

## Date
May 8, 2024

## Course
COSC 350 - Advanced Algorithms and Data Structures

## Programming Assignment 4

## File Structure

### `Person.h`
- **Purpose**: Declares the `Person` class, which includes details such as the person's name and their associated address.
- **Dependencies**: Includes and uses the `Address` class to manage address-related information.

### `Person.cpp`
- **Purpose**: Implements the `Person` class methods, including constructors, accessors, and utility methods like `print()` which outputs person details to the console.

### `Address.h`
- **Purpose**: Declares the `Address` class with properties like street, city, state, and zip code to store detailed address information.
- **Interaction**: Used by the `Person` class as part of the person's composition.

### `Address.cpp`
- **Purpose**: Implements the `Address` class, providing functionalities to handle address data which include a method to print address details.

### `main.cpp`
- **Purpose**: Contains the main driver code that demonstrates the instantiation and management of `Person` objects, handling user interactions through a simple console-based menu system.

## Compilation and Execution
Ensure that all source files are correctly placed in the same directory or appropriately configured in your project settings. The program can be compiled using a C++ compiler that supports C++11 or later. Example using `g++`:

###```bash
g++ -o PersonAddressSystem main.cpp Person.cpp Address.cpp
./PersonAddressSystem

###License
This project is licensed under the terms of the MIT license.

###Contact
Student: Justin Harris
Email: justin.harris@example.com


### Instructions for Use
- **Customize the email address**: Replace `[justin.harris@example.com](mailto:justin.harris@example.com)` with your actual university or personal email.
- **Add or remove sections**: Depending on the actual complexity and requirements of your project, you may want to add sections on project dependencies, external libraries, or build systems like CMake.
- **Save as `README.md`**: Save this text in a file named `README.md` in the root directory of your project.




