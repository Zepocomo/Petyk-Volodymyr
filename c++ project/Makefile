CC = g++
PARAMS = --std=c++17

run: sstatic
	@prog.exe

sstatic: static_library
	$(CC) ${PARAMS} -L .\ -static main.cpp -l lab -o prog.exe

static_library: add.cpp add1.cpp
	$(CC) ${PARAMS} -c add.cpp -o add.o 
	$(CC) ${PARAMS} -c add1.cpp -o add1.o
	$(CC) ${PARAMS} -c add2.cpp -o add2.o 
	ar rcs liblab.a add.o add1.o add2.o 

clean:
	del -rf *.s *.o *.exe *.a
	