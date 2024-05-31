.PHONY: clean object static shared bin run

clean:
	rm -f libarray.so array.o array.a example

object:
	gcc -c -Wall -Werror -fpic -lstdc++ array.cpp

static: object
	ar rcs array.a array.o

shared: object
	gcc -shared -o libarray.so array.o

bin: static
	gcc -Wall  -I./. -o example example.c -L./ -l:array.a

run: bin
	./example