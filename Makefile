multiplication : main.o fct.o
	gcc main.o fct.o -o multiplication

main.o : main.c fct.h
	gcc -c main.c

fct.o : fct.c
	gcc -c fct.c

clean : 
	rm *.o
