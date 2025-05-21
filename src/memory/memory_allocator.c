#include "memory_allocator.h"

void *allocate_memory(int size)
{
    void *head;
    if ((head = malloc(size)) != NULL)
        return head;
    else
    {
        printf("Failed to allocate the requested memory.");
        exit(1);
    }
}