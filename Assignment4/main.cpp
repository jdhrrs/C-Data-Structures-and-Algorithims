/**
 * main.cpp
 * Main driver program for testing the DoublyLinkedList class.
 *
 * This file serves as the driver program for the DoublyLinkedList class, facilitating user interactions
 * with a menu-driven interface. It allows for the insertion, removal, and display of Person objects
 * within a doubly linked list. The program initializes with a predefined set of Person objects and
 * processes user commands until termination.
 *
 * Justin Harris
 * 05/23/2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 4
 * Columbia College of Missouri
 * Professor. Randall Hutton
 */

#include <iostream>
#include "DoublyLinkedList.h"
#include "Person.h"
#include "Address.h"
int main() {

    // Instantiating Address and Person objects
    Address addresses[6] = {
        Address("6910 S Olmypia Ave", "Tulsa", "OK", "74132"),
        Address("2217 E 59th St","Tulsa", "OK", "74105"),
        Address("149 PR 7046", "Wills Point", "TX", "75169"),
        Address("501 W Archer St", "Tulsa", "OK", "74105"),
        Address("3954 N Story Rd", "Irving", "TX", "75038"),
        Address("8900 Independence Parkway", "Plano", "TX", "75025")
    };

    Person people[6] = {
        Person("Justin", "DeWayne", "Harris", addresses[0]),
        Person("Larry", "Michael", "Harris", addresses[1]),
        Person("Kristi", "Lousie", "Harris", addresses[2]),
        Person("Chandler", "Ray", "Harris", addresses[3]),
        Person("Ronald", "Dean", "Harris", addresses[4]),
        Person("Connie", "Marie", "Harris", addresses[5])
    };

    DoublyLinkedList list;
    for (int i = 0; i < 6; i++) {
        list.insertSorted(people[i]);
    }

    // User interface for list manipulation
    char choice;
    std::string name;
    do {
        std::cout << "\nEnter command (I: Insert, R: Remove, P: Print, Q: Quit): ";
        std::cin >> choice;
        switch (choice) {
        case 'I':
        {
            std::string first, middle, last, street, city, state, zip;
            std::cout << "Enter first name: ";
            std::cin >> first;
            std::cout << "Enter middle name: ";
            std::cin >> middle;
            std::cout << "Enter last name: ";
            std::cin >> last;
            std::cout << "Enter street: ";
            std::cin >> street;
            std::cout << "Enter city: ";
            std::cin >> city;
            std::cout << "Enter state: ";
            std::cin >> state;
            std::cout << "Enter zip: ";
            std::cin >> zip;
            Address newAddr(street, city, state, zip);
            Person newPerson(first, middle, last, newAddr);
            list.insertSorted(newPerson);
            break;
        }
        case 'R':
            std::cout << "Enter full name to remove: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            if (!list.remove(name))
                std::cout << "Person not found.\n";
            break;
        case 'P':
            list.print();
            break;
        case 'Q':
            std::cout << "Exiting program.\n";
            break;
        default:
            std::cout << "Invalid command.\n";
        }
    } while (choice != 'Q');

    system("pause");
    return 0;

}
