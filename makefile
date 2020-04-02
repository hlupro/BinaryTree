lab8: lab8Driver.o binaryTree.o
		g++ -o lab8 lab8Driver.o binaryTree.o

lab8Driver.o: lab8Driver.cpp
		g++ -c -g lab8Driver.cpp

binaryTree.o: binaryTree.cpp
		g++ -c -g	binaryTree.cpp

clean:
				rm *.o lab8
