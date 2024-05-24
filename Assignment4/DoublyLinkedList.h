/**
 * DoublyLinkedList.h
 * Declaration and Implementation of the DoublyLinkedList class.
 *
 * This file contains both the declaration and implementation of the DoublyLinkedList class.
 * The class is designed to manage a list of Person objects stored in a doubly linked list structure,
 * allowing for sorted insertion, deletion, and traversal of the list.
 *
 * Justin Harris
 * 05/23/2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 4
 * Columbia College of Missouri
 * Professor. Randall Hutton
 */

#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <iostream>
#include "Person.h"
#include "Address.h"
// Node class for the doubly linked list
class Node {
public:
    Person data;
    Node* next;
    Node* prev;

    Node(const Person& data) : data(data), next(nullptr), prev(nullptr) {}
};

// Doubly linked list class
class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Function to insert a new node in sorted order
    void insertSorted(const Person& person) {
        Node* newNode = new Node(person);
        if (!head) { // If the list is empty
            head = tail = newNode;
        }
        else {
            Node* current = head;
            while (current && person.getName() > current->data.getName()) {
                current = current->next;
            }
            if (!current) { // Insert at the end
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
            else if (current == head) { // Insert at the beginning
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
            else { // Insert in the middle
                newNode->prev = current->prev;
                newNode->next = current;
                current->prev->next = newNode;
                current->prev = newNode;
            }
        }
    }

    // Function to remove a node from the list
    bool remove(const std::string& name) {
        Node* current = head;
        while (current && current->data.getName() != name) {
            current = current->next;
        }
        if (!current) { // Not found
            return false;
        }
        if (current == head) { // Remove from head
            head = head->next;
            if (head) {
                head->prev = nullptr;
            }
        }
        else if (current == tail) { // Remove from tail
            tail = tail->prev;
            if (tail) {
                tail->next = nullptr;
            }
        }
        else { // Remove from middle
            current->prev->next = current->next;
            current->next->prev = current->prev;
        }
        delete current;
        return true;
    }

    // Function to print all nodes
    void print() const {
        Node* current = head;
        while (current) {
            current->data.print();
            current = current->next;
        }
    }
};

#endif // DOUBLY_LINKED_LIST_H
