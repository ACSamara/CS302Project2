#include "LinkedQueue.h"

template <class T>
LinkedQueue<T>::LinkedQueue(){
    first = last = nullptr;
    length = 0;
}
template <class T>
bool LinkedQueue<T>::enqueue(const T& value){
    if(this->isEmpty()){
        first = new Node<T>(value);
        last = first;
        return true;
    }
    Node<T>* temp = first;
    first = new Node<T>(value);
    first->setNext(temp);
    temp = nullptr;
    delete temp;
}
template <class T>
T LinkedQueue<T>::dequeue(){
    T output = last->getValue();
    Node<T>* toDelete = last;
    // last = last->getNext();
}
template <class T>
T LinkedQueue<T>::peek() const{
    return first->getValue();
}
template <class T>
bool LinkedQueue<T>::isEmpty() const{
    if(first == nullptr){
        return true;
    }
    return false;   
}
template <class T>
void LinkedQueue<T>::print() const{

}