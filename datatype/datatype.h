#ifndef TYPE_H
#define TYPE_H

typedef enum datatype
{
    CHAR,
    SIGNED_CHAR,
    UNSIGNED_CHAR,
    INT,
    SHORT_INT,
    LONG_INT,
    SIGNED_INT,
    UNSIGNED_INT,
    FLOAT,
    DOUBLE,
    LONG_DOUBLE
} datatype;

/*
    saves value at supplied memory address
        @type = data type of values to store
        @value = value to store
        @target_address = memory address to store the value
*/
void save_datatype(datatype type, void *value, void *target_address);

#endif