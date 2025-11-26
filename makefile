project2: main.o
	g++ -o project2 main.o -g
main.o: main.cpp LinkedList.h LinkedStack.h LinkedQueue.h ArrayList.h ArrayStack.h ArrayQueue.h Node.h
	g++ -c main.cpp -g
clean:
	rm *.o project2