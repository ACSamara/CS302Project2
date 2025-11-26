#include "ArrayList.h"
#include "ArrayQueue.h"
#include "ArrayStack.h"
#include "LinkedList.h"
#include "LinkedQueue.h"
#include "LinkedStack.h"

int main(){
    bool exit;
    do{
        int type, implementation;
        char c;
        bool cont = true;
        cout << "==== Data Structures Tester ===="<<endl;
        cout<<"1. Test List"<<endl<<"2. Test Stack"<<endl<<"3. Test Queue"<<endl<<"4. Exit"<<endl;
        cin >> type;
        if(type==4){
            break;
        }
        cout<<"Choose implementation:"<<endl<<"1. Array-based"<<endl<<"2. Linked"<<endl;
        cin>> implementation;
        if(type == 1){
            if(implementation==1){
                ArrayList<int> aList;
                int val, index;
                do{
                    cout<<"Value to add: ";
                    cin>>val;
                    cout<<"Position to add in: ";
                    cin>>index;
                    if(!aList.insert(index-1, val)){
                        cout << "Invalid index.";
                        continue;
                    }
                    cout<<"Continue adding? (y/n) ";
                    cin>>c;
                    if(c=='n'){
                        cont = false;
                    }
                }while(cont);
                aList.print();
                cont = true;
                do{
                    cout<<"Position to remove: ";
                    cin>>index;
                    if(!aList.remove(index-1)){
                        cout << "Invalid index. ";
                        continue;
                    }
                    aList.print();
                    cout<<"Continue removing? (y/n) ";
                    cin>>c;
                    if(c=='n'){
                        cont = false;
                    }
                }while(cont&&!aList.isEmpty());
                aList.print();
            }
            else{
                LinkedList<int> lList;
                int val, index;
                do{
                    cout<<"Value to add: ";
                    cin>>val;
                    cout<<"Position to add in: ";
                    cin>>index;
                    if(!lList.insert(index-1, val)){
                        cout << "Invalid index.";
                        continue;
                    }
                    cout<<"Continue adding? (y/n) ";
                    cin>>c;
                    if(c=='n'){
                        cont = false;
                    }
                }while(cont);
                lList.print();
                cont = true;
                do{
                    cout<<"Position to remove: ";
                    cin>>index;
                    if(!lList.remove(index-1)){
                        cout << "Invalid index. ";
                        continue;
                    }
                    lList.print();
                    cout<<"Continue removing? (y/n) ";
                    cin>>c;
                    if(c=='n'){
                        cont = false;
                    }
                }while(cont&&!lList.isEmpty());
                lList.print();
            }
        }
        else if(type == 2){
            if(implementation==1){
                ArrayStack<int> aStack;
                int val;
                do{
                    cout<<"Value to push: ";
                    cin>>val;
                    aStack.push(val);
                    cout<<"Continue pushing? (y/n) ";
                    cin>>c;
                    if(c=='n'){
                        cont = false;
                    }
                }while(cont);
                aStack.print();
                do{
                    cout<<"1. Peek"<<endl<<"2. Pop"<<endl<<"3. Exit"<<endl;
                    cin>>c;
                    if(c=='1'){
                        cout<<"Peek: "<<aStack.peek()<<endl;
                    }
                    else if(c=='2'){
                        cout<<"Pop: "<<aStack.pop()<<endl;
                    }
                }while(c!='3'&&!aStack.isEmpty());
                aStack.print();
            }
            else{
                LinkedStack<int> lStack;
                int val;
                do{
                    cout<<"Value to push: ";
                    cin>>val;
                    lStack.push(val);
                    cout<<"Continue pushing? (y/n) ";
                    cin>>c;
                    if(c=='n'){
                        cont = false;
                    }
                }while(cont);
                lStack.print();
                do{
                    cout<<"1. Peek"<<endl<<"2. Pop"<<endl<<"3. Exit"<<endl;
                    cin>>c;
                    if(c=='1'){
                        cout<<"Peek: "<<lStack.peek()<<endl;
                    }
                    else if(c=='2'){
                        cout<<"Pop: "<<lStack.pop()<<endl;
                    }
                }while(c!='3'&&!lStack.isEmpty());
                lStack.print();
            }
        }
        else if(type == 3){
            if(implementation==1){
                int val;
                ArrayQueue<int> aQueue;
                do{
                    cout<<"Value to enqueue: ";
                    cin>>val;
                    aQueue.enqueue(val);
                    cout<<"Continue enqueuing? (y/n) ";
                    cin>>c;
                    if(c=='n'){
                        cont = false;
                    }
                }while(cont);
                aQueue.print();
                do{
                    cout<<"1. Peek"<<endl<<"2. Dequeue"<<endl<<"3. Exit"<<endl;
                    cin>>c;
                    if(c=='1'){
                        cout<<"Peek: "<<aQueue.peek()<<endl;
                    }
                    else if(c=='2'){
                        cout<<"Dequeue: "<<aQueue.dequeue()<<endl;
                    }
                }while(c!='3'&&!aQueue.isEmpty());
                aQueue.print();
            }
            else{
                LinkedQueue<int> lQueue;
                int val;
                do{
                    cout<<"Value to enqueue: ";
                    cin>>val;
                    lQueue.enqueue(val);
                    cout<<"Continue enqueuing? (y/n) ";
                    cin>>c;
                    if(c=='n'){
                        cont = false;
                    }
                }while(cont);
                lQueue.print();
                do{
                    cout<<"1. Peek"<<endl<<"2. Dequeue"<<endl<<"3. Exit"<<endl;
                    cin>>c;
                    if(c=='1'){
                        cout<<"Peek: "<<lQueue.peek()<<endl;
                    }
                    else if(c=='2'){
                        cout<<"Dequeue: "<<lQueue.dequeue()<<endl;
                    }
                }while(c!='3'&&!lQueue.isEmpty());
                lQueue.print();
            }
        }
    }while(!exit);
    return 0;
}