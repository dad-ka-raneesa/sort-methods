#include "sort_arrays_void.h"

Object create_int(int value)
{
  int *element = malloc(sizeof(int));
  *element = value;
  return (Object)element;
}

Object create_char(char value)
{
  char *element = malloc(sizeof(char));
  *element = value;
  return (Object)element;
}

int find_length(char *value)
{
  int length = 0;
  for (; value[length] != '\0'; length++)
    ;
  return length;
}

char *create_string(char *value)
{
  int length = find_length(value);
  char *string = malloc(sizeof(char) * length);
  memcpy(string, value, length);
  return string;
}

Array_ptr create_array_void(int length)
{
  Array_ptr new_array = malloc(sizeof(Array));
  new_array->length = length;
  new_array->array = malloc(sizeof(Object) * length);
  return new_array;
}