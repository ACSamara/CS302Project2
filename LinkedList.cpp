#include "LinkedList.h"

template <class T>
LinkedList<T>::LinkedList(){
    first = nullptr;
    length = 0;
}
template <class T>
bool LinkedList<T>::insert(int, const T&){
    return true;
}
template <class T>
bool LinkedList<T>::remove(int){
    return true;
}
template <class T>
T LinkedList<T>::get(int index) const{
    Node<T>* temp = first;
    for(int i=0; i<index; i++){
        temp = temp->getNext();
    }
    return temp->getValue();
}
template <class T>
int LinkedList<T>::size() const{
    return length;
}
template <class T>
bool LinkedList<T>::isEmpty() const{
    if(first == nullptr){
        return true;
    }
    return false;
}
template <class T>
void LinkedList<T>::print() const{

}