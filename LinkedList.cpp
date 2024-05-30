/**
 * LinkedList.cpp
 * Implementation of the LinkedList class.
 *
 * Provides detailed implementation of the LinkedList class methods, including
 * adding, removing, counting, and printing nodes. This file encapsulates
 * the operations associated with a singly linked list of Person objects.
 *
 * Justin Harris
 * 05-30-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 5
 * Columbia College of Missouri
 */
#include "LinkedList.h"
#include <iostream>

 // Destructor to free the memory used by the list
LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* toDelete = current;
        current = current->next;
        delete toDelete;
    }
}

// Add a new person to the list in sorted order
void LinkedList::add(const Person& person) {
    Node* newNode = new Node(person);
    if (head == nullptr || head->person.getFullName() >= person.getFullName()) {
        newNode->next = head;
        head = newNode;
    }
    else {
        Node* current = head;
        while (current->next != nullptr && current->next->person.getFullName() < person.getFullName()) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Remove a person from the list
bool LinkedList::remove(const std::string& fullName) {
    if (head == nullptr) {
        return false;
    }
    if (head->person.getFullName() == fullName) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return true;
    }
    Node* current = head;
    while (current->next != nullptr && current->next->person.getFullName() != fullName) {
        current = current->next;
    }
    if (current->next == nullptr) {
        return false;
    }
    Node* toDelete = current->next;
    current->next = current->next->next;
    delete toDelete;
    return true;
}

// Count the number of persons in the list
int LinkedList::count() const {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        ++count;
        current = current->next;
    }
    return count;
}

// Print all persons in the list
void LinkedList::print() const {
    Node* current = head;
    while (current != nullptr) {
        current->person.print();
        current = current->next;
    }
}

// Recursive helper function to print the list in reverse order
void LinkedList::printReverseHelper(Node* node) const {
    if (node == nullptr) {
        return;
    }
    printReverseHelper(node->next);
    node->person.print();
}

// Print all persons in the list in reverse order
void LinkedList::printReverse() const {
    printReverseHelper(head);
}
