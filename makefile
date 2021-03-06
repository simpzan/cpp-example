all: main
	LD_LIBRARY_PATH=. ./main

libtest.so: test.cpp test.h
	clang++ -o libtest.so test.cpp --shared --std=c++14 -O0 -g -fPIC -lpthread

main: main.cpp libtest.so
	clang++ -o main main.cpp --std=c++14 -O0 -g -ltest -L. -lpthread

clean:
	rm -rf main libtest.so *.dSYM
