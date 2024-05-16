/**
 * LinkedList.h
 * Declaration of the LinkedList class.
 *
 * Defines the LinkedList class with methods to manage a singly linked list
 * of Person objects. This class provides functionalities to add, remove,
 * count, and print nodes, encapsulating all list management operations.
 *
 * Justin Harris
 * 05-08-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 2
 * Columbia College of Missouri
 */
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>

class LinkedList {
private:
    Node* head;

public:
    LinkedList();  // Constructor to initialize the list
    ~LinkedList(); // Destructor to clean up memory

    void add(const Person& data);  // Add a new person to the list
    bool remove(const std::string& name);  // Remove a person by name
    int count() const;  // Count the number of nodes in the list
    void print() const;  // Print all persons in the list
};

#endif
