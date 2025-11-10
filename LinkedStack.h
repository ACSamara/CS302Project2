#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

#include <iostream>
#include "Node.h"
using namespace std;

template <typename T> class LinkedStack{
    Node<T>* first;
    int length;
    public:
        LinkedStack();

        bool push(const T&);
        T pop();
        T peek() const;
        bool isEmpty() const;
        void print() const;
};
#endif