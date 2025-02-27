build:
	mkdir -p lib/
	make -C memory_cell/
	make -C datatype/
	make -C array/
	make -C linkedlist/

test:
	mkdir -p lib/
	make -C memory_cell/ test-program
	memory_cell/test-program

	make -C array/ test-program
	array/test-program
	
	make -C linkedlist/ test-program
	linkedlist/test-program

install: build
	mkdir -p /usr/local/algorithms_and_data_structures
	cp lib/* /usr/local/algorithms_and_data_structures
	cp **/*.h /usr/local/algorithms_and_data_structures

uninstall:
	rm -R /usr/local/algorithms_and_data_structures