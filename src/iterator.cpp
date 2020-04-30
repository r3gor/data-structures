#include "iterator.h"
#include "node.h"

template<typename T>
Iterator<T>& Iterator<T>::operator=(Node<T> *node) {
    this->current_node = node;
    return *this;
}

template<typename T>
Iterator<T>& Iterator<T>::operator++() {
    if (this->current_node)
        this->current_node = this->current_node->next ;
    return *this;
}

template<typename T>
Iterator<T> Iterator<T>::operator++(int) {
    Iterator temp = *this; /* Almaceno una COPIA (*this),
                            * NO el objeto original (this).
                            * */
    ++*this;
    return temp;
}

template<typename T>
bool Iterator<T>::operator!=(const Iterator<T>& iterator) {
    return this->current_node != iterator.current_node;
}

template<typename T>
T Iterator<T>::operator*() {
    return this->current_node->value;
}

template class Iterator<int>; // int-implementation