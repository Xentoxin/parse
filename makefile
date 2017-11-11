all: parse.c
	gcc -o parse parse.c

run: parse
	./parse
