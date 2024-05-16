/**
 *  Stack.cpp
 *  Implementation of the Stack class.
 *
 * This file provides the implementation of the Stack class. It defines methods to
 * manipulate the stack such as pushing and popping Person objects, checking if the
 * stack is empty, and destroying the stack. It utilizes dynamic memory management
 * to ensure proper resource allocation and deallocation.
 *
 * Justin Harris
 * 05-16-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 1
 * Columbia College of Missouri
 */

#include "Stack.h"
#include <iostream>

 // Constructor initializes the stack
Stack::Stack() : top(nullptr) {}

// Destructor clears all nodes
Stack::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}

// Push a Person onto the stack
void Stack::push(Person p) {
    Node* newNode = new Node(p);
    newNode->next = top;
    top = newNode;
}

// Pop a Person from the stack
Person Stack::pop() {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }
    Node* temp = top;
    Person poppedPerson = top->data;
    top = top->next;
    delete temp;
    return poppedPerson;
}

// Check if the stack is full (always false for dynamic structures)
bool Stack::isFull() const {
    return false;
}

// Check if the stack is empty
bool Stack::isEmpty() const {
    return top == nullptr;
}

// Print all persons in the stack
void Stack::print() {
    Node* current = top;
    while (current != nullptr) {
        current->data.print();
        current = current->next;
    }
}
