#include "LinkedStack.h"

template <class T>
LinkedStack<T>::LinkedStack(){
    first = nullptr;
    length = 0;
}
template <class T>
bool LinkedStack<T>::push(const T& value){
    if (isEmpty()){
        first = new Node<T>(nullptr, value);
        return true;
    }
    Node<T>* pushed = new Node<T>(first, value);
    first = pushed;
    length ++;

    return true;
}
template <class T>
T LinkedStack<T>::pop(){
    T output = first->getValue();
    Node<T>* toDelete = first;
    first = first->getNext();

    toDelete->setNext(nullptr);
    toDelete = nullptr;
    delete toDelete;
    length --;

    return output;
}
template <class T>
T LinkedStack<T>::peek() const{
    return first->getValue();
}
template <class T>
bool LinkedStack<T>::isEmpty() const{
    if(length <= 0){
        return true;
    }
    return false;    
}
template <class T>
void LinkedStack<T>::print() const{
    cout << "TOP | ";
    if(!isEmpty()){
        Node<T>* current = first;
        while(current!=nullptr){
            cout<<current->getValue()<<" ";
            current = current->getNext();
        }
    }   
    cout<<"| BOTTOM"<<endl;
}