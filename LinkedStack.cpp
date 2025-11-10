#include "LinkedStack.h"

template <class T>
LinkedStack<T>::LinkedStack(){
    first = nullptr;
    length = 0;
}
template <class T>
bool LinkedStack<T>::push(const T& value){
    if (this->isEmpty()){
        first = new Node<T>(value, nullptr);
        return true;
    }
    Node<T>* pushed = new Node<T>(value, first);
    first = pushed;
    return true;
}
template <class T>
T LinkedStack<T>::pop(){
    T output = first.getValue();
    Node<T>* toDelete = first;
    first = first.getNext();

    toDelete.setNext(nullptr);
    toDelete = nullptr;
    delete toDelete;

    return output;
}
template <class T>
T LinkedStack<T>::peek() const{
    return first.getValue();
}
template <class T>
bool LinkedStack<T>::isEmpty() const{
    if(first == nullptr){
        return true;
    }
    return false;    
}
template <class T>
void LinkedStack<T>::print() const{

}