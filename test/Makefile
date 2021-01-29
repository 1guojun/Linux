main:main.o cal.o
	gcc -o main main.o cal.o
main.o:main.c
	gcc -c main.c
cal.o:cal.c
	gcc -c cal.c

.PHONY:clean
clean:
	rm -f *.o main
