link: mainprogram.o firstfunc.o
	gcc  -o mainprogram.o firstfunc.o mainoprogram 
maino: mainprogram.c
	gcc -c -o mainprogram.o mainprogram.c
clean:
	rm *.o
view:
	ls 
run:
	./mainprogram 
lib: firstfunc.o
	gcc rsc libmlib.a firstfunc.o
update:
	echo "Enter name of the new C file ";
	read $f;
	vim $f;
	gcc -c -o $f.o $f.c
	ar rsc libmlib.a $f.o 


