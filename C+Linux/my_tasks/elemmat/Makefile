link: elemmat.o exmath.o
	gcc -o elemmat  elemmat.o exmath.o
elemmat.o: elemmat.c
	gcc -c -o elemmat.o elemmat.c
exmath.o: exmath.h exmath.c
	gcc -c -o exmath.o exmath.c
run: elemmat 
	./elemmat 
view:
	ls
clean:
	rm -rf *.o

