#include <iostream>
using namespace std;

template <typename T> class ArrayStack{
    public:
        bool push(const T&);
        T pop();
        T peek() const;
        bool isEmpty() const;
        void print() const;
}