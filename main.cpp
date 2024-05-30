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
 * 05-30-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 5
 * Columbia College of Missouri
 */
#include <iostream>
#include <string>
#include "LinkedList.h"
#include "Person.h"

  // Function to display available commands in the program
void displayMenu() {
    std::cout << "Commands:\n"
        << "ADD - Add a Person\n"
        << "REMOVE - Remove a Person\n"
        << "COUNT - Display the number of Persons\n"
        << "PRINT - Print all Persons\n"
        << "REVPRINT - Print all Persons in reverse order\n"
        << "QUIT - Exit the program\n";
}

// Main function where the program execution begins
int main() {
    LinkedList list;  // Create a LinkedList object to store persons

    // Add predefined data to the list
    list.add(Person("Justin", "Dewayne", "Harris", Address("6910 S Olympia Ave", "Tulsa", "OK", "74132")));
    list.add(Person("Larry", "Michael", "Harris", Address("2217 E 59th St", "Tulsa", "OK", "74105")));
    list.add(Person("Chandler", "Ray", "Harris", Address("501 W Archer St", "Tulsa", "OK", "74105")));
    list.add(Person("Kristi", "Louise", "Harris", Address("149 PR 7046", "Quinlan", "TX", "75169")));
    list.add(Person("Ronald", "Dean", "Harris", Address("Route 6 Box 398", "Wills Point", "TX", "75474")));
    list.add(Person("Connie", "Marie", "Harris", Address("3954 N Story Rd", "Irving", "TX", "75038")));

    std::string command;  // Variable to hold user input for commands
    while (true) {  // Infinite loop to keep the program running
        displayMenu();  // Display the menu each loop iteration
        std::cout << "Enter command: ";
        std::getline(std::cin, command);  // Read the line of input for commands 

        // Handle user commands
        if (command == "QUIT") {  // Exit the program if user enters QUIT
            break;
        }
        else if (command == "ADD") {  // Add a new Person if user enters ADD
            std::string first, middle, last, street, city, state, zip;
            // Prompt for and read person details from user
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
            // Add the new Person to the list in sorted order
            list.add(Person(first, middle, last, Address(street, city, state, zip)));
        }
        else if (command == "REMOVE") {  // Remove a Person if user enters REMOVE
            std::string name;
            std::cout << "Enter the full name to remove: ";
            std::getline(std::cin, name);
            if (!list.remove(name)) {
                std::cout << "Person not found.\n";  // Inform user if the Person is not found
            }
        }
        else if (command == "COUNT") {  // Display the count of Persons if user enters COUNT
            std::cout << "Number of persons: " << list.count() << std::endl;
        }
        else if (command == "PRINT") {  // Print all Persons if user enters PRINT
            list.print();
        }
        else if (command == "REVPRINT") {  // Print all Persons in reverse order if user enters REVPRINT
            list.printReverse();
        }
        else {
            std::cout << "Invalid command." << std::endl;  // Inform user of invalid command
        }
    }

    system("pause");  // Pause the system before closing to allow user to see the final output
    return 0;
}
