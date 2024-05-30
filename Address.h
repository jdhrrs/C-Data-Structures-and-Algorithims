/**
 * Address.h
 * Declaration of the Address class.
 *
 * Defines the Address class with properties to store detailed address information,
 * including street, city, state, and zip code. This class provides a structured
 * way to manage address data for use in larger compositions, such as a Person.
 *
 * Justin Harris
 * 2024-05-30
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 5
 * Columbia College of Missouri
 */
#pragma once
#include <string>
#include <iostream>

class Address {
private:
    std::string street;
    std::string city;
    std::string state;
    std::string zip;

public:
    Address(const std::string& str, const std::string& c, const std::string& st, const std::string& z);

    void print() const;
};
