/**
 * Time.cpp
 * Implementation of the Time class.
 *
 * This file provides the implementation of the Time class which includes
 * methods for setting time, printing time, and comparing two Time objects.
 * The Time class uses a 12-hour clock format and supports comparison operations
 * to determine if one time is less than, greater than, or equal to another.
 *
 * Justin Harris
 * 2024-04-29
 * COSC 350 - Advanced Algorthims and Data Structures 
 * Programming Assignment 1
 * Columbia College of Missouri
 * 
 */





#include <iostream>
#include "Time.h"

 // constructor with initializer list
Time::Time(int hour, int minute, std::string amPm)
    : hour(hour), minute(minute), amPm(amPm) {}  // Use proper syntax here

// print method outside of constructor
void Time::print() const {
    std::cout << "Time: " << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << amPm << std::endl;
}

//  comparison method outside of constructor
std::string Time::comparedTo(const Time& other) const {
    // Calculate total minutes since midnight for comparison
    int thisMinutes = hour * 60 + minute + (amPm == "PM" ? 720 : 0);
    int otherMinutes = other.hour * 60 + other.minute + (other.amPm == "PM" ? 720 : 0);
    if (thisMinutes == otherMinutes) return "EQUAL";
    else if (thisMinutes > otherMinutes) return "GREATER";
    else return "LESS";
}
