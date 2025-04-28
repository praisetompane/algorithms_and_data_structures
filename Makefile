build:
	mkdir -p lib/
	make -C memory_cell/
	make -C data_type/
	make -C array/
	make -C linked_list/

test:
	mkdir -p lib/
	make -C memory_cell/ test_program
	memory_cell/test_program

	make -C array/ test_program
	array/test_program
	
	make -C linked_list/ test_program
	linked_list/test_program

install: build
	mkdir -p /usr/local/algorithms_and_data_structures
	cp lib/* /usr/local/algorithms_and_data_structures
	cp **/*.h /usr/local/algorithms_and_data_structures

uninstall:
	rm -R /usr/local/algorithms_and_data_structures