#include <iostream>
#include "Node.h"
using namespace std;

template <typename T> class LinkedQueue{
    Node* first, last;
    int size;
    public:
        LinkedQueue();

        bool enqueue(const T&);
        T dequeue();
        T peek() const;
        bool isEmpty() const;
        void print() const;
};