/**
 * Address.h
 * Declaration of the Address class.
 *
 * Defines the Address class with properties to store detailed address information,
 * including street, city, state, and zip code. This class provides a structured
 * way to manage address data for use in larger compositions, such as a Person.
 *
 * Justin Harris
 * 2024-04-29
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 1
 * Columbia College of Missouri
 */
#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

// Definition of the Address class
class Address {
public:
    // Constructor with parameters for street, city, state, and zip code
    Address(const std::string& street, const std::string& city, const std::string& state, const std::string& zip);
    // Method to print address details
    void print() const;

private:
    // Private attributes for address details
    std::string street;
    std::string city;
    std::string state;
    std::string zipCode;
};

#endif

