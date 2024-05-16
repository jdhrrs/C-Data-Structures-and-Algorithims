/**
 *  Stack.h
 *  Header file for the Stack class.
 *
 * This file provides the declaration of the Stack class. The Stack class manages a
 * collection of Person objects using a linked list. It supports basic stack operations
 * like push, pop, and checks for stack emptiness. It is designed to operate with
 * the Node class.
 *
 * Justin Harris
 * 05-16-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 1
 * Columbia College of Missouri
 */

#ifndef STACK_H
#define STACK_H

#include "Node.h"

 // Stack class for managing a stack of Person objects
class Stack {
public:
    Stack();  // Constructor
    ~Stack();  // Destructor

    void push(Person p);  // Push a Person onto the stack
    Person pop();  // Pop a Person from the stack
    bool isFull() const;  // Check if the stack is full
    bool isEmpty() const;  // Check if the stack is empty
    void print();  // Print all persons in the stack

private:
    Node* top;  // Pointer to the top of the stack
};

#endif // STACK_H
