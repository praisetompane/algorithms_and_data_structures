lib_data_type.a:
	make data_type.o
	ar rcs lib_data_type.a data_type.o
	mv lib_data_type.a ../../lib
	make clean
data_type.o: data_type.c data_type.h 
	gcc -c data_type.c 

clean:
	rm -rf *.o
	rm -rf *.h.gch
	rm -rf *.a
	rm -rf test_program