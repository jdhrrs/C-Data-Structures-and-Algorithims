/**
 * main.cpp
 * Driver program for the Person, Address, and Time classes.
 *
 * This program demonstrates the functionality of the Person, Address,
 * and Time classes. It creates instances of these classes, sets their
 * properties, and displays them. The program also demonstrates the
 * comparison functionality of the Time class.
 *
 * Justin Harris
 * 2024-04-29
 * COSC 350 - Advanced Algorthims and Data Structures 
 * Programming Assignment 1
 * Columbia College of Missouri
 *
 */
#include "Address.h"
#include "Person.h"
#include <iostream>
#include "Time.h"

int main() {
    // Creating an Address instance
    Address addy("6910 South Olympia Ave", "Tulsa", "OK", "74132");
    // Creating a Person instance
    Person person("Justin", "Dewayne", "Harris", addy);
    // Creating Time instances
    Time time1(11, 30, "AM");
    Time time2(10, 00, "AM");
    .
    // Printing details of Person and Time
    person.print();
    time1.print();
    // Comparing two times and printing the result
    std::cout << "Comparison: " << time1.comparedTo(time2) << std::endl;
    system("pause");
    return 0;
}
