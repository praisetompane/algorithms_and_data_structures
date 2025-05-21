build:
	mkdir -p lib/
	make -C src/memory/
	make -C src/type/
	make -C src/array/
	make -C src/linked_list/

test:
	mkdir -p lib/
	
	make -C src/memory/ test_program
	src/memory/test_program

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

clean:
	rm -rf ./lib/*.o
	rm -rf ./lib/*.h.gch
	rm -rf ./lib/*.a