#include <iostream>
using namespace std;

template <typename T> class LinkedQueue{
    public:
        bool enqueue(const T&);
        T dequeue();
        T peek() const;
        bool isEmpty() const;
        void print() const;
}