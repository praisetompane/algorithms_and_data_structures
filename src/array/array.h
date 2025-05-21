#include "../type/type.h"

#ifndef ARRAY_H
#define ARRAY_H

/*
    defined a type called 'struct Array'
    gave it an alias Array
*/
typedef struct Array
{
    void *head;
    int length;
    Type type;
} Array;

/*
    creates and returns an Array for the specified:
        @type = data type of values to store
        @size = number of items to be stored
        type variable-name [size]
*/
Array array(Type type, int size);

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