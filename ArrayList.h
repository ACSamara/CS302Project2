#include <iostream>
using namespace std;

template <typename T> class ArrayList{
    T* data;
    int max;
    int size;
    public:
        ArrayList();

        bool insert(int, const T&);
        bool remove(int);
        T get(int) const;
        int size() const;
        bool isEmpty() const;
        void print() const;
};