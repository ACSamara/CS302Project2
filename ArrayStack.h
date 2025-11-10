#include <iostream>
using namespace std;

template <typename T> class ArrayStack{
    T* data;
    int max;
    int size;
    public:
        ArrayStack();

        bool push(const T&);
        T pop();
        T peek() const;
        bool isEmpty() const;
        void print() const;
};