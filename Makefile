all:
	g++ -o test main.cpp pessoa.cpp professor.cpp
clean:
	rm test
run:
	./test

