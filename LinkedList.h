/**
 * LinkedList.h
 * Declaration of the LinkedList class.
 *
 * Defines the LinkedList class with methods to manage a singly linked list
 * of Person objects. This class provides functionalities to add, remove,
 * count, and print nodes, encapsulating all list management operations.
 *
 * Justin Harris
 * 05-30-2024
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 5
 * Columbia College of Missouri
 */
#pragma once
#include "Person.h"

class LinkedList {
private:
    struct Node {
        Person person;
        Node* next;
        Node(const Person& p) : person(p), next(nullptr) {}
    };
    Node* head;

    void printReverseHelper(Node* node) const;

public:
    LinkedList() : head(nullptr) {}
    ~LinkedList();

    void add(const Person& person);
    bool remove(const std::string& fullName);
    int count() const;
    void print() const;
    void printReverse() const;
};
