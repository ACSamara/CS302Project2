#include "ArrayList.h"

template <class T>
ArrayList<T>::ArrayList(){
    max = 5;
    size = 0;
    array = new Node<T>[max];
}
template <class T>
bool ArrayList<T>::insert(int index, const T& obj){
    if(size == max){
        max+=2;
        temp = new Node<T>[max];
        for(int i=0; i<size; i++){
            temp[i] = data[i];
        }
        delete[] data;
        data = temp;
    }
    // Move everything over; doesn't run if inserting at end
    for(int i=size; i>index; i--){
        data[i] = data[i-1];
    }
    data[index] = obj;
    size ++;
}
template <class T>
bool ArrayList<T>::remove(int index){

}
template <class T>
T ArrayList<T>::get(int) const{
    return data[i];
}
template <class T>
int ArrayList<T>::size() const{
    return size;
}
template <class T>
bool ArrayList<T>::isEmpty() const{
    if (size == 0){
        return true;
    }
    return false;
}
template <class T>
void ArrayList<T>::print() const{
    for (int i= 0; i<size; i++){
        cout<<array[i];
    }
}