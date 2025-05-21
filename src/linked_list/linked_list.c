#include "linked_list.h"
#include <stdlib.h>

LinkedList linkedlist(Type type)
{
    LinkedList temp = {NULL, 0, type};
    return temp;
}

void add(LinkedList *collection, void *value)
{
    Node *n = node(value, NULL);
    save_data(collection->type, value, n->value);

    if (collection->head != NULL)
    {
        Node *currentnode = collection->head;
        while (currentnode->next != NULL)
            currentnode = currentnode->next;
        currentnode->next = n;
    }
    else
    {
        collection->head = n;
    }

    collection->length += 1;
}

void print(LinkedList collection)
{
    if (collection.head != NULL)
    {
        Node *currentnode = collection.head;
        while (currentnode->next != NULL)
        {
            printf("%d->", *(int *)currentnode->value);
            currentnode = currentnode->next;
        }
        printf("%d\n", *(int *)currentnode->value);
    }
    else
    {
        printf("linked_list is empty");
    }
}