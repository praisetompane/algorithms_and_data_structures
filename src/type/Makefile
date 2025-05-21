lib_type.a:
	make type.o
	ar rcs lib_type.a type.o
	mv lib_type.a ../../lib
	make clean
	
type.o: type.c type.h 
	gcc -c type.c 

clean:
	rm -rf *.o
	rm -rf *.h.gch
	rm -rf *.a
	rm -rf test_program