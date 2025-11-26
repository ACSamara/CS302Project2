#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

template <typename T> class Node{
    Node* next;
    T value;
    public:
        Node();
        Node(const Node<T>&);
        Node(Node<T>*, T);

        Node* getNext();
        T getValue();

        void setNext(Node*);
        void setValue(T);

        Node<T>& operator=(const Node<T>&);
};
#include "Node.cpp"
#endif