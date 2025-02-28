#include "../memory_cell/memory_allocator.h"

#ifndef NODE_H
#define NODE_H

typedef struct node
{
    void *value;
    struct node *next;
} node;

/*
    create a new node
*/
node * newnode();

/*
    create a new node
        @value = value for node 
        @next = the node's successor
*/
node * newnode(void *value, node *next);

#endif