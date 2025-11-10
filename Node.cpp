#include "Node.h"

template <class T>
Node<T>::Node(){
    next = nullptr;
}
template <class T>
Node<T>::Node(const Node& rhs){
    next = rhs.next;
    value = rhs.value;
}
template <class T>
Node<T>::Node(Node* n, T v){
    next = n;
    value = v;
}
template <class T>
Node<T>* Node<T>::getNext(){
    return next;
}
template <class T>
T Node<T>::getValue(){
    return value;
}
template <class T>
void Node<T>::setNext(Node* n){
    next = n;
}
template <class T>
void Node<T>::setValue(T v){
    value = v;
}