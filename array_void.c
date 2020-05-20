#include "sort.h"

Object create_int(int value)
{
  int_ptr element = malloc(sizeof(int));
  *element = value;
  return (Object)element;
}

Object create_char(char value)
{
  char_ptr element = malloc(sizeof(char));
  *element = value;
  return (Object)element;
}

int find_length(char_ptr value)
{
  int length = 0;
  for (; value[length] != '\0'; length++)
    ;
  return length;
}

char_ptr create_string(char_ptr value)
{
  int length = find_length(value);
  char_ptr string = malloc(sizeof(char) * length);
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