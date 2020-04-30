#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "iterator.h"
#include "node.h"

template <typename T>
class LinkedList {
    public:
    LinkedList() {this->size_count = 0;}; 
    void add(T e);
    bool contains(T e);
    void clear();
    T get(int);
    void remove(int);
    int size();
    void print();
    Iterator<T> begin();
    Iterator<T> end();

    private:
    int size_count = 0;
    Node<T> *head = nullptr;
};

#endif 
