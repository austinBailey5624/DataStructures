lab4: main.o BinarySearchTree.o Node.o
	g++ -g -Wall main.o BinarySearchTree.o Node.o -o lab4

main.o: main.cpp BinarySearchTree.h Node.h
	g++ -g -c -Wall main.cpp

BinarySearchTree.o: BinarySearchTree.cpp BinarySearchTree.h Node.cpp Node.h
	g++ -g -c -Wall BinarySearchTree.cpp

Node.o: Node.cpp Node.h
	g++ -g -c -Wall Node.cpp

clean:
	rm *.o lab4
	echo clean done
