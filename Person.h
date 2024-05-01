#ifndef PERSON_H
#define PERSON_H

#include "Address.h"

// Definition of the Person class
class Person {
public:
    // Constructor with parameters for names and address
    Person(const std::string& first, const std::string& middle, const std::string& last, const Address& addr);
    // Method to print person details
    void print() const;

private:
    // Private attributes for person's name and address
    std::string firstName;
    std::string middleName;
    std::string lastName;
    Address address;
};

#endif
