/**
 * main.cpp
 * Main driver program for the linked list management system.
 *
 * This file serves as the driver program for the linked list management system,
 * handling user input and providing a menu to manage a list of Person objects.
 * Supports adding, removing, counting, and printing Person objects through a
 * user-friendly command line interface.
 *
 * Justin Harris
 * 2024-04-29
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 1
 * Columbia College of Missouri
 */
#include <iostream>
#include <string>
#include "LinkedList.h"
#include "Person.h"  // Make sure this path is correct

void displayMenu() {
    std::cout << "Commands:\n"
        << "ADD - Add a Person\n"
        << "REMOVE - Remove a Person\n"
        << "COUNT - Display the number of Persons\n"
        << "PRINT - Print all Persons\n"
        << "QUIT - Exit the program\n";
}

int main() {
    LinkedList list;
    // Initialize with predefined data
    list.add(Person("Justin", "Dewayne", "Harris", Address("6910 S Olympia Ave", "Tulsa", "OK", "74132")));
    list.add(Person("Larry", "Michael", "Harris", Address("2217 E 59th St", "Tulsa", "OK", "74105")));
    list.add(Person("Chandler", "Ray", "Harris", Address("501 W Archer St", "Tulsa", "OK", "74105")));
    list.add(Person("Kristi", "Louise", "Harris", Address("149 PR 7046", "Quinlan", "TX", "75169")));
    list.add(Person("Ronald", "Dean", "Harris", Address("Route 6 Box 398", "Wills Point", "TX", "75474")));
    list.add(Person("Connie", "Marie", "Harris", Address("3954 N Story Rd", "Irving", "TX", "75038")));

    std::string command;
    while (true) {
        displayMenu();
        std::cout << "Enter command: ";
        std::getline(std::cin, command);  // Use getline to handle spaces in input
        if (command == "QUIT") {
            break;
        }
        else if (command == "ADD") {
            std::string first, middle, last, street, city, state, zip;
            std::cout << "Enter first name: ";
            std::getline(std::cin, first);
            std::cout << "Enter middle name: ";
            std::getline(std::cin, middle);
            std::cout << "Enter last name: ";
            std::getline(std::cin, last);
            std::cout << "Enter street: ";
            std::getline(std::cin, street);
            std::cout << "Enter city: ";
            std::getline(std::cin, city);
            std::cout << "Enter state: ";
            std::getline(std::cin, state);
            std::cout << "Enter zip code: ";
            std::getline(std::cin, zip);
            list.add(Person(first, middle, last, Address(street, city, state, zip)));
        }
        else if (command == "REMOVE") {
            std::string name;
            std::cout << "Enter the full name to remove: ";
            std::getline(std::cin, name);
            if (!list.remove(name)) {
                std::cout << "Person not found.\n";
            }
        }
        else if (command == "COUNT") {
            std::cout << "Number of persons: " << list.count() << std::endl;
        }
        else if (command == "PRINT") {
            list.print();
        }
        else {
            std::cout << "Invalid command." << std::endl;
        }
    }

    system("pause");  // Consider using a more portable method or removing it for non-Windows platforms
    return 0;
}
