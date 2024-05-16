# Assignment1
## Overview

This project implements a simple address book using a linked list data structure. The address book stores `Person` objects, which include `Address` and `Time` details. The project consists of several C++ files organized into logical units for handling addresses, persons, time, and linked list operations.

## File Structure

- **Address.h / Address.cpp**
  - These files define and implement the `Address` class, which includes information such as street, city, state, and zip code.

- **Person.h / Person.cpp**
  - These files define and implement the `Person` class, which includes personal information such as name, an `Address` object, and a `Time` object.

- **Time.h / Time.cpp**
  - These files define and implement the `Time` class, which includes information such as hours, minutes, and seconds.

- **Node.h**
  - This file defines the `Node` class used in the linked list, representing each element in the list.

- **LinkedList.h / LinkedList.cpp**
  - These files define and implement the `LinkedList` class, which manages a collection of `Node` objects. Each `Node` contains a `Person` object and a pointer to the next node.

- **main.cpp**
  - This file contains the `main` function, which serves as the entry point of the program. It demonstrates the usage of the `LinkedList` to manage the address book.

## Classes

### Address

- **Attributes:**
  - `street`: `std::string`
  - `city`: `std::string`
  - `state`: `std::string`
  - `zip`: `std::string`

- **Methods:**
  - Constructors
  - Getters and setters for each attribute
  - `print()`: Displays the address information

### Person

- **Attributes:**
  - `name`: `std::string`
  - `address`: `Address`
  - `time`: `Time`

- **Methods:**
  - Constructors
  - Getters and setters for each attribute
  - `print()`: Displays the person's information, including their address and time

### Time

- **Attributes:**
  - `hours`: `int`
  - `minutes`: `int`
  - `seconds`: `int`

- **Methods:**
  - Constructors
  - Getters and setters for each attribute
  - `print()`: Displays the time information

### Node

- **Attributes:**
  - `person`: `Person`
  - `next`: `Node*` (pointer to the next node)

- **Methods:**
  - Constructors

### LinkedList

- **Attributes:**
  - `head`: `Node*` (pointer to the first node in the list)

- **Methods:**
  - `add(Person p)`: Adds a person to the list
  - `remove(std::string name)`: Removes a person from the list by name
  - `print()`: Displays all persons in the list

## Getting Started

### Prerequisites

- C++ compiler (e.g., g++)

### Compilation and Execution

1. Compile the project using the following command:
   ```bash
   g++ -o address_book main.cpp Address.cpp Person.cpp Time.cpp LinkedList.cpp
   ```

2. Run the executable:
   ```bash
   ./address_book
   ```

### Usage

- The program demonstrates adding and removing persons from the address book and printing the list of all persons.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Instructor: Prof. Randall Hutton
- Course: COSC 350 - Advanced Algorithms and Data Structures, Columbia College of Missouri

