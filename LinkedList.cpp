/**
 * LinkedList.cpp
 * Implementation of the LinkedList class.
 *
 * Provides detailed implementation of the LinkedList class methods, including
 * adding, removing, counting, and printing nodes. This file encapsulates
 * the operations associated with a singly linked list of Person objects.
 *
 * Justin Harris
 * 2024-04-29
 * COSC 350 - Advanced Algorithms and Data Structures
 * Programming Assignment 1
 * Columbia College of Missouri
 */
#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::add(const Person& data) {
    Node* newNode = new Node(data, head);
    head = newNode;
}

bool LinkedList::remove(const std::string& name) {
    Node* current = head;
    Node* previous = nullptr;
    while (current != nullptr) {
        if (current->data.getName() == name) {
            if (previous == nullptr) {
                head = current->next;
            }
            else {
                previous->next = current->next;
            }
            delete current;
            return true;
        }
        previous = current;
        current = current->next;
    }
    return false;
}

int LinkedList::count() const {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

void LinkedList::print() const {
    Node* current = head;
    while (current != nullptr) {
        current->data.print();
        current = current->next;
    }
}
