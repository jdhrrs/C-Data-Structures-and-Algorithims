/**
 *  Address.cpp
 *  Implementation of the Address class.
 *
 * This file provides the implementation of the Address class. The class includes
 * methods for setting and printing detailed address information such as street,
 * city, state, and zip code. The Address class encapsulates all these properties
 * and provides a cohesive way to manage and display address data.
 *
 * Justin Harris
 * 2024-04-29
 * COSC 350 - Advanced Algorthims and Data Structures 
 * Programming Assignment 1
 * Columbia College of Missour
 */
#include "Address.h"
#include <iostream>

// Constructor implementation
Address::Address(const std::string& street, const std::string& city, const std::string& state, const std::string& zip)
    : street(street), city(city), state(state), zipCode(zip) {}

// Print method implementation
void Address::print() const {
    std::cout << "Address: " << street << ", " << city << ", " << state << ", " << zipCode << std::endl;
}
