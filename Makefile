.PHONY: clean build-static build run

clean:
	rm -f ./example
	cd foreign-bindings && make clean

build-static:
	cd foreign-bindings && make static

build: build-static
	odin build ../array-research -out:example

run: clean build
	./example
