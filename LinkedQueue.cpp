#include "LinkedQueue.h"

template <class T>
LinkedQueue<T>::LinkedQueue(){
    first = last = nullptr;
    length = 0;
}
template <class T>
bool LinkedQueue<T>::enqueue(const T& value){
    if(isEmpty()){
        first = new Node<T>(nullptr, value);
        last = first;
        return true;
    }
    Node<T>* temp = first;
    first = new Node<T>(temp, value);
    temp = nullptr;
    delete temp;
    length ++;
    return true;
}
template <class T>
T LinkedQueue<T>::dequeue(){
    T output = last->getValue();
    Node<T>* toDelete = last;
    delete toDelete;
    toDelete = nullptr;
    length --;

    last = first;
    for(int i=0; i<length; i++){
        last = last->getNext();
    }

    return output;
}
template <class T>
T LinkedQueue<T>::peek() const{
    return last->getValue();
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
    cout<<"BACK | ";
    Node<T>* current = first;
    while(current!=nullptr){
        cout<<current->getValue()<<" ";
        current = current->getNext();
    }
    cout<< "| FRONT" <<endl;
}