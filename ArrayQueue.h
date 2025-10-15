#include <iostream>
using namespace std;

template <typename T> class ArrayQueue{
    public:
        bool enqueue(const T&);
        T dequeue();
        T peek() const;
        bool isEmpty() const;
        void print() const;
}