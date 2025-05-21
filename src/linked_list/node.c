#include "../memory/memory_allocator.h"
#include "node.h"

Node *node(void *value, Node *next)
{
    Node *n = (Node *)allocate_memory(sizeof(Node));
    n->value = value;
    n->next = next;
    return n;
}
