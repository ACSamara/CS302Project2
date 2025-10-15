#include <iostream>
using namespace std;

template <typename T> class Node{
    Node* next;
    T value;
    public:
        Node();
        Node(const Node&);
        Node(Node*, T);

        Node* getNext();
        T getValue();

        void setNext(Node*);
        void setValue(T);
}