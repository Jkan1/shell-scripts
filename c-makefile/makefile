myapp: main.o file2.o file3.o
	gcc -o myapp main.o file2.o file3.o
main.o: main.c headers/headerFile1.h
	gcc -c main.c
file2.o: file2.c headers/headerFile1.h headers/headerFile2.h
	gcc -c file2.c
file3.o: file3.c headers/headerFile2.h headers/headerFile3.h
	gcc -c file3.c