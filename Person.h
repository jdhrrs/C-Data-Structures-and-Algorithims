/**
 *  Person.h
 *  Declaration of the Person class.
 *
 * This file provides the declaration of the Person class. The Person class represents
 * an individual person with a name, age, and associated address, offering methods to
 * access and display these properties.
 *
 * Justin Harris
 * 05-16-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 3
 * Columbia College of Missouri
 */

#ifndef PERSON_H
#define PERSON_H

#include "Address.h"
#include <string>

 // Class representing a person with a name, age, and address
class Person {
public:
    Person(std::string name, int age, Address address);  // Constructor with parameters
    std::string getName() const;  // Getter for person's name
    int getAge() const;  // Getter for person's age
    Address getAddress() const;  // Getter for person's address
    void print() const;  // Print person details

private:
    std::string name;  // Person's name
    int age;  // Person's age
    Address address;  // Person's address
};

#endif // PERSON_H
