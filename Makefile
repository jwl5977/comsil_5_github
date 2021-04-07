cc = g++

run : main.o str.o
	g++ -o run main.o str.o

str.o : str.cpp
	g++ -c -g str.cpp

.PHONY : clean
clean : 
	rm *.o run
