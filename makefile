make: main.c
	gcc main.c

run: a.out
	./a.out

a.out:
	gcc main.c

clean: a.out
	rm a.out