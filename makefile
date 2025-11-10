project2: main.o linked.o array.o
	g++ -o project2 main.o LinkedList.o LinkedQueue.o LinkedStack.o ArrayList.o -g
main.o: main.cpp LinkedList.h LinkedStack.h LinkedQueue.h ArrayList.h
	g++ -c main.cpp -g
linked.o: LinkedList.h LinkedStack.h LinkedQueue.h
	g++ -c LinkedList.cpp LinkedStack.cpp LinkedQueue.cpp -g
array.o: ArrayList.h 
	g++ -c ArrayList.cpp 
clean:
	rm *.o project2
