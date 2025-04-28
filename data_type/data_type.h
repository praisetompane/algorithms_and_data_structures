#ifndef TYPE_H
#define TYPE_H

typedef enum data_type
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
} data_type;

/*
    saves value at supplied memory address
        @type = data type of values to store
        @value = value to store
        @target_address = memory address to store the value
*/
void save_data_type(data_type type, void *value, void *target_address);

#endif