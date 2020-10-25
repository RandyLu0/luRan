all: Work03.o
	gcc -o program Work03.o
Work03.o:
	gcc -c Work03.c
run:
	./program