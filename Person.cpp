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
 * 2024-04-29
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 1
 * Columbia College of Missouri
 */
#include "Person.h"
#include <iostream>

// Constructor implementation
Person::Person(const std::string& first, const std::string& middle, const std::string& last, const Address& addr)
    : firstName(first), middleName(middle), lastName(last), address(addr) {}

// Print method implementation
void Person::print() const {
    std::cout << "Name: " << firstName << " " << middleName << " " << lastName << std::endl;
    address.print();
}
