lib_linked_list.a:
	make linked_list.o
	make node.o
	ar rcs lib_linked_list.a linked_list.o node.o
	mv lib_linked_list.a ../../lib
	make clean

linked_list.o: linked_list.h linked_list.c node.h ../data_type/data_type.h ../memory_cell/memory_allocator.h
	gcc -c linked_list.c node.c ../memory_cell/memory_allocator.c ../data_type/data_type.c

node.o: node.c node.h ../memory_cell/memory_allocator.c
	gcc -c node.c ../memory_cell/memory_allocator.c

test_program:
	make -C ../memory_cell/
	make -C ../data_type/
	make lib_linked_list.a
	gcc test_program.c -o test_program -L. ../../lib/lib_linked_list.a ../../lib/lib_memory_allocator.a ../../lib/lib_data_type.a

clean:
	rm -rf *.o
	rm -rf *.h.gch
	rm -rf *.a
	rm -rf test_program