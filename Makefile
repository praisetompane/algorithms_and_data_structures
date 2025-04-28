build:
	mkdir -p lib/
	make -C src/memory_cell/
	make -C src/data_type/
	make -C src/array/
	make -C src/linked_list/

test:
	mkdir -p lib/
	make -C src/memory_cell/ test_program
	src/memory_cell/test_program

	make -C src/array/ test_program
	src/array/test_program
	
	make -C src/linked_list/ test_program
	src/linked_list/test_program

install: build
	mkdir -p /usr/local/algorithms_and_data_structures
	cp lib/* /usr/local/algorithms_and_data_structures
	cp src/**/*.h /usr/local/algorithms_and_data_structures

uninstall:
	rm -R /usr/local/algorithms_and_data_structures