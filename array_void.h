#ifndef __ARRAYS_VOID_H_
#define __ARRAYS_VOID_H_

typedef void *Object;

typedef enum
{
  False,
  True
} Bool;

typedef struct
{
  Object *array;
  int length;
} Array;

typedef Array *Array_ptr;

Object create_int(int value);
Object create_char(char value);
int find_length(char *value);
char *create_string(char *value);
Array_ptr create_array_void(int);

#endif