#include "ArrayList.h"
#include "ArrayQueue.h"
#include "ArrayStack.h"
#include "LinkedList.h"
#include "LinkedQueue.h"
#include "LinkedStack.h"

int main(){
    cout<<"Testing Array List..."<<endl;
    ArrayList<int> x1;
    for(int i=0; i<5; i++){
        x1.insert(i, i);
    }
    x1.print();
    x1.insert(3, 7);
    x1.print();
    x1.remove(3);
    x1.remove(0);
    x1.print();

    cout<<endl<<"Testing Linked List..."<<endl;
    LinkedList<char> y1;
    y1.insert(0, 'a');
    y1.insert(1, 'b');
    y1.insert(1, 'c');
    y1.insert(0, 'd');
    y1.insert(6, 'e');
    y1.insert(4, 'f');
    y1.print();
    y1.remove(2);
    y1.print();

    cout<<endl<<"Testing Array Stack..."<<endl;
    ArrayStack<string> x2;
    x2.push("this");
    x2.push("is");
    x2.push("a");
    x2.push("stack");
    x2.print();
    cout<<"Peek: "<<x2.peek()<<endl;
    cout<<"Pop: "<<x2.pop()<<" "<<x2.pop()<<endl;
    x2.print();

    cout<<endl<<"Testing Linked Stack..."<<endl;
    LinkedStack<float> y2;
    for(float f = 0; f<2; f+=0.2){
        y2.push(f);
    }
    y2.print();
    cout<<"Peek: "<<y2.peek()<<endl;
    cout<<"Pop: "<<y2.pop()<<" "<<y2.pop()<<endl;
    y2.print();

    cout<<endl<<"Testing Array Queue..."<<endl;
    ArrayQueue<int> x3;
    for(int i=2; i<33; i*=2){
        x3.enqueue(i);
    }
    x3.print();
    cout<<"Dequeue: "<<x3.dequeue()<<" "<<x3.dequeue()<<endl;
    cout<<"Peek: "<<x3.peek()<<endl;

    cout<<endl<<"Testing Linked Queue..."<<endl;
    LinkedQueue<int> y3;
    for(int i=0; i<5; i++){
        y3.enqueue(i);
    }
    y3.print();
    cout<<"Dequeue: ";
    for(int i=0; i<3; i++){
        cout<< y3.dequeue() <<" ";
    }
    cout << endl <<"Peek: "<< y3.peek() <<endl;

    return 0;
}