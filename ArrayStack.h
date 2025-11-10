#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <iostream>
using namespace std;

template <typename T> class ArrayStack{
    T* data;
    int max;
    int length;
    public:
        ArrayStack();

        bool push(const T&);
        T pop();
        T peek() const;
        bool isEmpty() const;
        void print() const;
};
#endif