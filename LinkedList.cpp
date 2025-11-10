#include "LinkedList.h"

template <class T>
LinkedList<T>::LinkedList(){
    first = nullptr;
    size = 0;
}
template <class T>
bool LinkedList<T>::insert(int, const T&){

}
template <class T>
bool LinkedList<T>::remove(int){

}
template <class T>
T LinkedList<T>::get(int) const{

}
template <class T>
int LinkedList<T>::size() const{
    return size;
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