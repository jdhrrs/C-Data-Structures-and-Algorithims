/**
 * Person.h
 * Declaration of the Person class.
 *
 * This file declares the Person class, which encapsulates the details of a person,
 * including their first name, middle name, last name, and address. The class provides
 * methods to retrieve the full name of the person and to print the person's details.
 *
 * Justin Harris
 * 05-30-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 5
 * Columbia College of Missouri
 */

#pragma once
#include <string>
#include "Address.h"

class Person {
private:
    std::string firstName;
    std::string middleName;
    std::string lastName;
    Address address;

public:
    Person(const std::string& first, const std::string& middle, const std::string& last, const Address& addr);

    std::string getFullName() const;

    void print() const;
};
