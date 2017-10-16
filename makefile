all: linklist.c
	gcc -o linked_list linklist.c
clean:
	rm *~
run: all
	./linked_list
