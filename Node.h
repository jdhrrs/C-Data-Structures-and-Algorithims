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
 * 05-30-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 5
 * Columbia College of Missouri
 */
#ifndef NODE_H
#define NODE_H

#include "Person.h"

class Node {
public:
    Person person;
    Node* next;

    Node(const Person& person, Node* next = nullptr)
        : person(person), next(next) {}
};

#endif // NODE_H

