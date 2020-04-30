#ifndef ITERATOR_H
#define ITERATOR_H

#include "node.h"

template<typename T>
class Iterator {
    private:
    Node<T> *current_node = nullptr;
    public:
    Iterator<T> (Node<T>* node) noexcept: current_node(node) {}; 
    Iterator<T>& operator=(Node<T> *node);
    Iterator<T>& operator++();
    Iterator<T> operator++(int);
    bool operator!=(const Iterator<T>& iterator);
    T operator*();
};
#endif