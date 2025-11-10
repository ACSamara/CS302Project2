#include <iostream>
#include "Node.h"
using namespace std;

template <typename T> class LinkedList{
    Node* first;
    int size;
    public:
        LinkedList();

        bool insert(int, const T&);
        bool remove(int);
        T get(int) const;
        int size() const;
        bool isEmpty() const;
        void print() const;
};
