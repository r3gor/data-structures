#include<iostream>

#include "linked_list.h"
#include "iterator.cpp"
#include "node.h"

template <typename T> 
Iterator<T> LinkedList<T>::begin() {
    return Iterator<T>(this->head);
}

template<typename T>
Iterator<T> LinkedList<T>::end() {
    return Iterator<T>(nullptr);
}

template <typename T> 
void LinkedList<T>::add(T e) {
    size_count++;
    if (head == nullptr) {
        head = new Node<T>{e, nullptr}; 
        return;    
    }

    if (head->value > e) {
        head = new Node<T>{e, head};
        return;
    }
    
    Node<T> *i = head;
    while (i->next != nullptr) {
        if (i->next->value > e)
            break;
        i = i->next;
    }
    i->next = new Node<T>{e, i->next};
}

template<typename T> 
bool LinkedList<T>::contains(T e) {
    Node<T> *i = head;
    while(i!= nullptr && i->value != e)
        i = i->next;
    if (i == nullptr)
        return false;
    return true;
}

template <typename T> 
void LinkedList<T>::clear() {
    Node<T> *i = head, *to_erase;
    while (i!=nullptr) {
        to_erase = i;
        i = i->next;
        delete to_erase;
    }
    head = nullptr;
    size_count = 0;
}

template<typename T> 
T LinkedList<T>::get(int index) {
    if (index < 0 || index > size_count-1)
        throw std::out_of_range ("index out of range");
    Node<T> *node = head;
    for (int i = 0; node!=nullptr && i<index; i++, node=node->next);
    return node->value;
}

template<typename T> 
void LinkedList<T>::remove(int index) {
    if (index < 0 || index > size_count-1)
        throw std::out_of_range ("index out of range");
    Node<T> *node = head;
    for (int i = 0; i<index-1; i++, node=node->next);
    Node<T> *node_next = node->next->next;
    delete node->next;
    node->next = node_next;
}

template <typename T> 
int LinkedList<T>::size() {
    return size_count;
}

template<typename T> 
void LinkedList<T>::print() {
    Node<T> *i = head;
    std::cout<<"list: ";
    while (i!= nullptr) {
        std::cout<<i->value<<" ";
        i = i->next;
    }
    std::cout<<"\n";
}

template class LinkedList<int>; // int-implementation