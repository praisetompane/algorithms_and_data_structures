#include "../data_type/data_type.h"
#include "node.h"

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct LinkedList
{
    Node *head;
    int length;
    DataType type;
} LinkedList;

/*
    creates and returns a linked list for the specified
        @type = data type of values to store§3     #3
*/
LinkedList linkedlist(DataType type);

/*
    add a node at the end of linked list
        @value = value to store
    flow:
        iterate list
            until, @currentnode->next is NULL
                create @newnode with @value
                set current @currentnode->next to @newnode
*/
void add(LinkedList *collection, void *value);

/*
    store an item at the top
        @value = value to store
*/
LinkedList add_to_top(void *value);

/*
    read an item at the end
        @collection = collection to read from
        @value = node to read
*/
Node read(LinkedList *collection, void *value);

/*
    read an item at the top
        @collection = collection to read from
        @value = node to read
*/
Node read_from_top(LinkedList *collection, void *value);

/*
    delete an item at the end
        @collection = collection to read from
        @value = node to read
*/
Node delete(LinkedList *collection, void *value);
/*
    delete an item at the top
        @collection = collection to read from
        @value = node to read
*/
Node delete_from_top(LinkedList *collection, void *value);

/*
    print the collection
    @collection = collection to print
*/
void print(LinkedList collection);

#endif