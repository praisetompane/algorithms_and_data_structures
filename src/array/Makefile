lib_array.a:
	make array.o
	ar rcs lib_array.a array.o
	mv lib_array.a ../../lib
	make clean

array.o: array.c array.h ../type/type.h ../memory/memory_allocator.c
	gcc -c array.c ../memory/memory_allocator.c ../type/type.c

test_program:
	make -C ../memory
	make -C ../type/
	make lib_array.a
	gcc test_program.c -o test_program -L. ../../lib/lib_array.a ../../lib/lib_memory_allocator.a ../../lib/lib_type.a

clean:
	rm -rf *.o
	rm -rf *.h.gch
	rm -rf *.a
	rm -rf test_program