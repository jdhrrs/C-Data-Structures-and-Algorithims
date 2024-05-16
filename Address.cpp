/**
 *  Address.cpp
 *  Implementation of the Address class.
 *
 * This file provides the implementation of the Address class, supporting operations
 * such as the initialization of address details and the presentation of these details
 * when requested. It aims to encapsulate the complexity of address handling.
 *
 * Justin Harris
 * 05-16-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 3
 * Columbia College of Missouri
 */

#include "Address.h"
#include <iostream>

 // Constructor for the Address class
Address::Address(std::string street, std::string city, std::string state, std::string zip)
    : street(street), city(city), state(state), zip(zip) {}

// Return the street part of the address
std::string Address::getStreet() const {
    return street;
}

// Return the city part of the address
std::string Address::getCity() const {
    return city;
}

// Return the state part of the address
std::string Address::getState() const {
    return state;
}

// Return the ZIP code part of the address
std::string Address::getZip() const {
    return zip;
}

// Print the address details to the console
void Address::print() const {
    std::cout << "Address: " << street << ", " << city << ", " << state << ", " << zip << std::endl;
}