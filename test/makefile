test:Sort.o test.o
	gcc -o $@ $^
Sort.o:Sort.c
	gcc -c Sort.c
test.o:test.c
	gcc -c test.c

.PHONY:clean
clean:
	rm -f *.o test
