#ifndef PERSON_H
#define PERSON_H

#include "Address.h"
#include <string>

class Person {
public:
    Person(const std::string& first, const std::string& middle, const std::string& last, const Address& addr);
    void print() const;

    // Method to get the full name of the person
    std::string getName() const;

private:
    std::string firstName;
    std::string middleName;
    std::string lastName;
    Address address;
};

#endif

