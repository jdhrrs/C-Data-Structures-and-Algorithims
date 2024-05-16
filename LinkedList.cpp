/**
 * LinkedList.cpp
 * Implementation of the LinkedList class.
 *
 * Provides detailed implementation of the LinkedList class methods, including
 * adding, removing, counting, and printing nodes. This file encapsulates
 * the operations associated with a singly linked list of Person objects.
 *
 * Justin Harris
 * 05-08-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 2
 * Columbia College of Missouri
 */
#include "LinkedList.h"  // Include the header file for the LinkedList class

// Constructor that initializes the list with a null head, indicating an empty list
LinkedList::LinkedList() : head(nullptr) {}

// Destructor that cleans up all allocated nodes to prevent memory leaks
LinkedList::~LinkedList() {
    Node* current = head;  // Start from the head of the list
    while (current != nullptr) {  // Traverse all nodes in the list
        Node* next = current->next;  // Temporarily store the next node
        delete current;  // Delete the current node
        current = next;  // Move to the next node
    }
}

// Method to add a new node containing the Person object to the front of the list
void LinkedList::add(const Person& data) {
    Node* newNode = new Node(data, head);  // Create a new node with data and point it to the current head
    head = newNode;  // Update head to the new node
}

// Method to remove a node by matching the Person's name
bool LinkedList::remove(const std::string& name) {
    Node* current = head;  // Start from the head of the list
    Node* previous = nullptr;  // Keep track of the previous node
    while (current != nullptr) {  // Traverse all nodes
        if (current->data.getName() == name) {  // Check if the current node's data matches the name
            if (previous == nullptr) {  // If it's the first node
                head = current->next;  // Update head to the next node
            }
            else {  // If it's not the first node
                previous->next = current->next;  // Bypass the current node
            }
            delete current;  // Delete the current node
            return true;  // Return true indicating success
        }
        previous = current;  // Move previous to current
        current = current->next;  // Move to the next node
    }
    return false;  // Return false if the name was not found
}

// Method to count the number of nodes in the list
int LinkedList::count() const {
    int count = 0;  // Initialize count
    Node* current = head;  // Start from the head of the list
    while (current != nullptr) {  // Traverse all nodes
        count++;  // Increment count for each node
        current = current->next;  // Move to the next node
    }
    return count;  // Return the total count of nodes
}

// Method to print the data of all nodes in the list
void LinkedList::print() const {
    Node* current = head;  // Start from the head of the list
    while (current != nullptr) {  // Traverse all nodes
        current->data.print();  // Call the print method of the data (Person)
        current = current->next;  // Move to the next node
    }
}
