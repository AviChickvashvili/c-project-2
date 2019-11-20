all: bank

bank: main.o myBank.h
	gcc -o bank myBank.o main.o

main.o: main.c myBank.h
	gcc -c myBank.c main.c 

.PHONY: clean all

clean: 
	rm -f *.o bank