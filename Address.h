/**
 *  Address.h
 *  Header file for the Address class.
 *
 * This file provides the declaration of the Address class. The Address class is designed
 * to encapsulate street, city, state, and zip code details of an individual or location,
 * offering a comprehensive way to manage and display address information.
 *
 * Justin Harris
 * 05-16-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 3
 * Columbia College of Missouri
 */

#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

 // Class representing an address
class Address {
public:
    Address(std::string street, std::string city, std::string state, std::string zip);  // Constructor with parameters
    std::string getStreet() const;  // Getter for street
    std::string getCity() const;  // Getter for city
    std::string getState() const;  // Getter for state
    std::string getZip() const;  // Getter for zip code
    void print() const;  // Print address details

private:
    std::string street;
    std::string city;
    std::string state;
    std::string zip;
};
#endif // ADDRESS_H