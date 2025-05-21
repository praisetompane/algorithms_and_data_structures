#include "../memory/memory_allocator.h"
#include "array.h"

Array array(Type type, int size)
{
    Array temp = {NULL, 0, type};
    switch (type)
    {
    case CHAR:
        temp.head = (char *)allocate_memory((sizeof(char) * size));
        break;
    case SIGNED_CHAR:
        temp.head = (signed char *)allocate_memory((sizeof(signed char) * size));
        break;
    case UNSIGNED_CHAR:
        temp.head = (unsigned char *)allocate_memory((sizeof(unsigned char) * size));
        break;
    case INT:
        temp.head = (int *)allocate_memory((sizeof(int) * size));
        break;
    case SHORT_INT:
        temp.head = (short int *)allocate_memory((sizeof(short int) * size));
        break;
    case LONG_INT:
        temp.head = (long int *)allocate_memory((sizeof(long int) * size));
        break;
    case SIGNED_INT:
        temp.head = (signed int *)allocate_memory((sizeof(signed int) * size));
        break;
    case UNSIGNED_INT:
        temp.head = (unsigned int *)allocate_memory((sizeof(unsigned int) * size));
        break;
    case FLOAT:
        temp.head = (float *)allocate_memory((sizeof(float) * size));
        break;
    case DOUBLE:
        temp.head = (double *)allocate_memory((sizeof(double) * size));
        break;
    case LONG_DOUBLE:
        temp.head = (long double *)allocate_memory((sizeof(long double) * size));
        break;
    }
    return temp;
}

void add(Array *collection, int index, void *value)
{
    void *target_address = collection->head + index;
    save_data(collection->type, value, target_address);
    collection->length += 1;
}

void read(Array *collection, int index, void *destination)
{
    void *targetAddress = collection->head + index;
    switch (collection->type)
    {
    case CHAR:
        *(char *)destination = *(char *)targetAddress;
        break;
    case SIGNED_CHAR:
        *(signed char *)destination = *(signed char *)targetAddress;
        break;
    case UNSIGNED_CHAR:
        *(unsigned char *)destination = *(unsigned char *)targetAddress;
        break;
    case INT:
        *(int *)destination = *(int *)targetAddress;
        break;
    case SHORT_INT:
        *(short int *)destination = *(short int *)targetAddress;
        break;
    case LONG_INT:
        *(long int *)destination = *(long int *)targetAddress;
        break;
    case SIGNED_INT:
        *(signed int *)destination = *(signed int *)targetAddress;
        break;
    case UNSIGNED_INT:
        *(unsigned int *)destination = *(unsigned int *)targetAddress;
        break;
    case FLOAT:
        *(float *)destination = *(float *)targetAddress;
        break;
    case DOUBLE:
        *(double *)destination = *(double *)targetAddress;
        break;
    case LONG_DOUBLE:
        *(char *)destination = *(long double *)targetAddress;
        break;
    }
}
