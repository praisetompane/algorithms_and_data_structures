#include "../data_type/data_type.h"
#include "node.h"

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct linked_list
{  
    node *head;
    int length;
    data_type type;
} linked_list; 


/*
    creates and returns a linked list for the specified
        @type = data type of values to store§3     #3
*/
linked_list new(data_type type);

/*
    add a node at the end of linked list
        @value = value to store
    flow:
        iterate list
            until, @currentnode->next is NULL
                create @newnode with @value
                set current @currentnode->next to @newnode
*/
void add(linked_list *collection, void *value);

/*
    store an item at the top 
        @value = value to store
*/
linked_list add_to_top(void *value);


/*
    read an item at the end 
        @collection = collection to read from 
        @value = node to read
*/
node read(linked_list *collection, void *value);

/*
    read an item at the top 
        @collection = collection to read from 
        @value = node to read
*/
node read_from_top(linked_list *collection, void *value);

/*
    delete an item at the end 
        @collection = collection to read from 
        @value = node to read
*/
node delete(linked_list *collection, void *value);
/*
    delete an item at the top 
        @collection = collection to read from 
        @value = node to read
*/
node delete_from_top(linked_list *collection, void *value);
#endif