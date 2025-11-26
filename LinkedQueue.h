#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

#include <iostream>
#include "Node.h"
using namespace std;

template <typename T> class LinkedQueue{
    Node<T>* first, *last;
    int length;
    public:
        LinkedQueue();

        bool enqueue(const T&);
        T dequeue();
        T peek() const;
        bool isEmpty() const;
        void print() const;
};
#include "LinkedQueue.cpp"
#endif