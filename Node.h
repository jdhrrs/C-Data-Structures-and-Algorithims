/**
 *  Node.h
 *  Declaration of the Node class.
 *
 * This file provides the declaration of the Node class, which is used to represent
 * a node in a linked structure. Each node holds a Person object and a pointer to the
 * next node. This structure is fundamental in building the stack using linked lists.
 *
 * Justin Harris
 * 05-16-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 1
 * Columbia College of Missouri
 */

#ifndef NODE_H
#define NODE_H

#include "Person.h"

 // Node class for linked list structure
class Node {
public:
    Person data;  // Data in the node
    Node* next;  // Pointer to the next node

    // Constructor to initialize node with a person object
    Node(Person p) : data(p), next(nullptr) {}
};

#endif 
