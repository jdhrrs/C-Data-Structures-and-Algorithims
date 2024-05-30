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
 * 05-30-2024
 * COSC 350 - Advanced Algorthims and Data Structures
 * Programming Assignment 5
 * Columbia College of Missour
 */
#include "Address.h"
#include <iostream>

 // Constructor definition
Address::Address(const std::string& str, const std::string& c, const std::string& st, const std::string& z)
    : street(str), city(c), state(st), zip(z) {}

// Print function definition
void Address::print() const {
    std::cout << street << ", " << city << ", " << state << " " << zip << std::endl;
}
