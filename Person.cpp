/**
 * Person.cpp
 * Implementation of the Person class.
 *
 * This file provides the implementation of the Person class, which includes
 * methods for initializing a person's name and address, and a method for printing
 * the person's details. The Person class is central to demonstrating the usage
 * of composite objects as it incorporates an Address object within it.
 *
 * Justin Harris
 * 05-30-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 5
 * Columbia College of Missouri
 */
#include "Person.h"
#include <iostream>

 // Constructor
Person::Person(const std::string& first, const std::string& middle, const std::string& last, const Address& addr)
    : firstName(first), middleName(middle), lastName(last), address(addr) {}

// Get full name
std::string Person::getFullName() const {
    return firstName + " " + middleName + " " + lastName;
}

// Print person details
void Person::print() const {
    std::cout << firstName << " " + middleName + " " + lastName << std::endl;
    address.print();
}
