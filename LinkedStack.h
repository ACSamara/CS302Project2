#include <iostream>
#include "Node.h"
using namespace std;

template <typename T> class LinkedStack: public Linked{
    Node* first;
    int size;
    public:
        LinkedStack();

        bool push(const T&);
        T pop();
        T peek() const;
        bool isEmpty() const;
        void print() const;
};