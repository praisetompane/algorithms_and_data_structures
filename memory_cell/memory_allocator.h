#include <stdlib.h>
#include <stdio.h>

#ifndef MEMORY_ALLOCATOR_H
#define MEMORY_ALLOCATOR_H

/*
    allocate memory of specified size and return pointer to first byte
        @size = size of memory in bytes
*/
void *allocate_memory(int size);

#endif