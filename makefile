all: main
	./main

libtest.so: test.cpp test.h
	clang++ -o libtest.so test.cpp --shared --std=c++14 -O0 -g

main: main.cpp libtest.so
	clang++ -o main main.cpp --std=c++14 -O0 -g -ltest -L.

clean:
	rm -rf main libtest.so *.dSYM