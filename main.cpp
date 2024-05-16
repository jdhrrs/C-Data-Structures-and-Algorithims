/**
 *  main.cpp
 *  Driver program for the Stack class.
 *
 * This file provides the main function for the stack application. It initializes
 * a stack with predefined Person objects, provides a menu to manipulate the stack,
 * and handles user inputs for operations like push, pop, and print. It showcases the
 * functionality of the Stack class in a practical scenario.
 *
 * Justin Harris
 * 05-16-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 1
 * Columbia College of Missouri
 */

#include <iostream>
#include "Person.h"
#include "Address.h"
#include "Stack.h"

 // Function to display the menu options
void displayMenu() {
    std::cout << "Menu:\n";
    std::cout << "1. PUSH\n";
    std::cout << "2. POP\n";
    std::cout << "3. isFull\n";
    std::cout << "4. PRINT\n";
    std::cout << "5. QUIT\n";
    std::cout << "Enter your choice: ";
}

int main() {
    Stack stack;  // Initialize the stack

    // Predefined addresses and persons
    Address addr1("6910 S Olympia Ave", "Tulsa", "OK", "74132");
    Address addr2("Route 6 Box 398", "Wills Point", "TX", "75169");
    Address addr3("149 PR 7046", "Wills Point", "TX", "75169");
    Address addr4("501 W Archer St", "Tulsa", "OK", "74102");
    Address addr5("2217 E 59th St", "Tulsa", "OK", "74105");
    Address addr6("6801 S Olympia Ave", "Tulsa", "OK", "74132");

    Person p1("Justin Harris", 35, addr1);
    Person p2("Connie Harris", 55, addr2);
    Person p3("Kristi Harris", 36, addr3);
    Person p4("Chandler Harris", 15, addr4);
    Person p5("Larry Harris", 45, addr5);
    Person p6("Ronald Harris", 61, addr6);

    stack.push(p1);  // Push initial persons onto the stack
    stack.push(p2);
    stack.push(p3);
    stack.push(p4);
    stack.push(p5);
    stack.push(p6);

    int choice;
    bool running = true;

    while (running) {
        displayMenu();  // Display menu
        std::cin >> choice;  // Get user choice

        switch (choice) {
        case 1: {  // PUSH operation
            std::string name;
            int age;
            std::string street, city, state, zip;

            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter age: ";
            std::cin >> age;
            std::cout << "Enter street: ";
            std::cin >> street;
            std::cout << "Enter city: ";
            std::cin >> city;
            std::cout << "Enter state: ";
            std::cin >> state;
            std::cout << "Enter zip: ";
            std::cin >> zip;

            Address addr(street, city, state, zip);
            Person person(name, age, addr);
            stack.push(person);
            break;
        }
        case 2: {  // POP operation
            try {
                Person poppedPerson = stack.pop();
                std::cout << "Popped person: ";
                poppedPerson.print();
            }
            catch (const std::out_of_range& e) {
                std::cout << e.what() << std::endl;
            }
            break;
        }
        case 3: {  // Check if full
            std::cout << "Stack is full: " << (stack.isFull() ? "Yes" : "No") << std::endl;
            break;
        }
        case 4: {  // PRINT operation
            stack.print();
            break;
        }
        case 5: {  // QUIT operation
            running = false;
            break;
        }
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
