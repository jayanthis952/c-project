ABC.exe: main.o big3.o fact.o rev.o
	gcc main.o big3.o fact.o rev.o -o ABC.exe

main.o: main.c
	gcc -c main.c

big3.o: big3.c
	gcc -c big3.c

fact.o: fact.c
	gcc -c fact.c

rev.o: rev.c
	gcc -c rev.c

clean:
	rm -f *.o ABC.exe

