/**
 * Time.h
 * Declaration of the Time class.
 *
 * Defines the Time class to handle time data in a 12-hour format. Includes functionality
 * to set, print, and compare times, which is essential for applications that manage
 * schedules or events based on time comparisons.
 *
 * Justin Harris
 * 2024-04-29
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 1
 * Columbia College of Missouri
 */
#ifndef TIME_H
#define TIME_H

#include <string>

// Definition of the Time class
class Time {
public:
    // Constructor with parameters for hour, minute, and AM/PM
    Time(int hour, int minute, std::string amPm);
    // Method to print time
    void print() const;
    // Method to compare two times
    std::string comparedTo(const Time& other) const;

private:
    // Private attributes for time details
    int hour;
    int minute;
    std::string amPm; // "AM" or "PM"
};

#endif
