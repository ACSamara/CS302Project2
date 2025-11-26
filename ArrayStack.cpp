#include "ArrayStack.h"

template <class T>
ArrayStack<T>::ArrayStack(){
    max = 5;
    length = 0;
    data = new T[max];
}
template <class T>
bool ArrayStack<T>::push(const T& value){
    if(length >= max){
        max+=2;
        T* temp = new T[max];
        for(int i=0; i<length; i++){
            temp[i] = data[i];
        }
        delete[] data;
        data = temp;
    }
    data[length] = value;
    length ++;
    return true;
}
template <class T>
T ArrayStack<T>::pop(){
    length --;
    return data[length];
}
template <class T>
T ArrayStack<T>::peek() const{
    return data[length-1];
}
template <class T>
bool ArrayStack<T>::isEmpty() const{
    if(length == 0){
        return true;
    }
    return false;
}
template <class T>
void ArrayStack<T>::print() const{
    cout<<"TOP | ";
    for (int i=length; i>0; i--){
        cout<<data[i-1]<<" ";
    }
    cout<<"| BOTTOM"<<endl;
}