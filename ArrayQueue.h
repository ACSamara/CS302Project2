#include <iostream>
using namespace std;

template <typename T> class ArrayQueue{
        T* data;
        int max;
        int size;
    public:
        ArrayQueue();

        bool enqueue(const T&);
        T dequeue();
        T peek() const;
        bool isEmpty() const;
        void print() const;
};