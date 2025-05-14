#include "../data_type/data_type.h"

#ifndef ARRAY_H
#define ARRAY_H

/*
    defined a type called 'struct Array'
    gave it an alias Array
*/
typedef struct Array
{
    void *first_address;
    int length;
    DataType type;
} Array;

/*
    creates and returns an Array for the specified:
        @type = data type of values to store
        @size = number of items to be stored
        type variable-name [size]
*/
Array array(DataType type, int size);

/*
    store a value in the collection
        @collection = collection to add to
        @index = index to store the in
        @value = value to store
*/
void add(Array *collection, int index, void *value);

/*
    read an item
        @collection = collection to read from
        @index = index to read
        @*destination = pointer to memory address to read into
*/

void read(Array *collection, int index, void *destination);

#endif