#include "Node.h"

template <class T>
Node<T>::Node(){
    next = nullptr;
}
template <class T>
Node<T>::Node(const Node<T>& rhs){
    next = rhs.next;
    value = rhs.value;
}
template <class T>
Node<T>::Node(Node<T>* n, T v){
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
template <class T>
Node<T>& Node<T>::operator=(const Node<T>& rhs){
    next = rhs.next;
    value = rhs.value;
}