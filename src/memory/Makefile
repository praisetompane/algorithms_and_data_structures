lib_memory_allocator.a:
	make memory_allocator.o
	ar rcs lib_memory_allocator.a memory_allocator.o
	mv lib_memory_allocator.a ../../lib
	make clean

memory_allocator.o: memory_allocator.c
	gcc -c memory_allocator.c 

test_program:
	make lib_memory_allocator.a
	gcc test_program.c -o test_program -L. ../../lib/lib_memory_allocator.a
	
clean:
	rm -rf *.o
	rm -rf *.h.gch
	rm -rf *.a