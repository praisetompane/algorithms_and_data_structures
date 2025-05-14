#include "../memory_cell/memory_allocator.h"

#ifndef NODE_H
#define NODE_H

typedef struct Node
{
    void *value;
    struct Node *next;
} Node;

/*
    create a new node
*/
Node *newnode();

/*
    create a new node
        @value = value for node
        @next = the node's successor
*/
Node *newnode(void *value, Node *next);

#endif