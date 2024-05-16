/**
 * Node.h
 * Declaration of the Node class for the linked list.
 *
 * The Node class defines the fundamental element of a singly linked list,
 * containing a Person object as data and a pointer to the next node in the list.
 * This class is utilized within the LinkedList class to store and manage
 * connections between data points (Persons) in the list.
 *
 * Justin Harris
 * 05-08-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 2
 * Columbia College of Missouri
 */
#ifndef NODE_H
#define NODE_H

#include "Person.h"

 // Node class definition for the linked list
class Node {
public:
    Person data;  // Stores the data (Person object)
    Node* next;   // Pointer to the next Node in the list

    // Constructor to initialize the Node with a Person object and an optional next Node pointer
    Node(const Person& d, Node* n = nullptr) : data(d), next(n) {}
};

#endif
