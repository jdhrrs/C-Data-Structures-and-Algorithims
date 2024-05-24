/**
 * Person.h
 * Declaration of the Person class.
 *
 * Defines the Person class with properties to store personal information,
 * including first name, middle name, last name, and associated address.
 * This class provides a structured way to manage person data and integrates
 * with the Address class to form a comprehensive representation of an individual.
 * The Person class is pivotal for demonstrating data encapsulation and management
 * in a more complex system.
 *
 * Justin Harris
 * 05/08/2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 4
 * Columbia College of Missouri
 * Professor. Randall Hutton
 */
#ifndef PERSON_H
#define PERSON_H

#include "Address.h"
class Person {
public:
    // Make sure constructor uses fully qualified names if namespaces are involved
    Person(const std::string& first, const std::string& middle, const std::string& last, const Address& addr);
    std::string getName() const;  // Extracts the full name
    void print() const;  // Prints Person details using std::cout

private:
    std::string firstName;
    std::string middleName;
    std::string lastName;
    Address address;  // Ensure Address is correctly recognized
};

#endif
