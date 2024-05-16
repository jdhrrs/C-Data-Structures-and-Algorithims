/**
 *  Person.cpp
 *  Implementation of the Person class.
 *
 * This file provides the implementation for the Person class, facilitating the creation
 * and management of person data, including actions like constructing a person and
 * printing their details to the console.
 *
 * Justin Harris
 * 05-16-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 3
 * Columbia College of Missouri
 */

#include "Person.h"
#include <iostream>

 // Constructor for the Person class
Person::Person(std::string name, int age, Address address)
    : name(name), age(age), address(address) {}

// Return the person's name
std::string Person::getName() const {
    return name;
}

// Return the person's age
int Person::getAge() const {
    return age;
}

// Return the person's address
Address Person::getAddress() const {
    return address;
}

// Print the person's details to the console
void Person::print() const {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
    address.print();
}
