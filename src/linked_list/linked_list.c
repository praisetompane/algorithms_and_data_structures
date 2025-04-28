#include "linked_list.h"
#include <stdlib.h>

linked_list new(data_type type)
{
    linked_list temp = {NULL, 0, type};
    return temp;
}

void add(linked_list *collection, void *value)
{
    node *n = newnode(value, NULL);
    save_data_type(collection->type, value, n->value);

    if (collection->head != NULL)
    {
        node *currentnode = collection->head;
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

void printlinked_list(linked_list collection)
{
    if (collection.head != NULL)
    {
        node *currentnode = collection.head;
        while (currentnode->next != NULL)
        {
            printf("%d->", *(int *)currentnode->value);
            currentnode = currentnode->next;
        }
        printf("%d\n", *(int *)currentnode->value);
    }
    else
        printf("linked_list is empty");
}