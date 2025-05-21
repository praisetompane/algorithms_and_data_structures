#include "../memory/memory_allocator.h"

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
Node *node();

/*
    create a new node
        @value = value for node
        @next = the node's successor
*/
Node *node(void *value, Node *next);

#endif