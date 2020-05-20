#include "sort_array_void.h"


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

void selection_sort_array_void(Array_ptr void_array, Predicate predicate)
{
  int index;
  Object temp;
  FOR_I(0, void_array->length)
  {
    index = i;
    FOR_J(i + 1, void_array->length)
    {
      if ((*predicate)(void_array->array[j], void_array->array[index]))
      {
        index = j;
      }
    }

    temp = void_array->array[i];
    void_array->array[i] = void_array->array[index];
    void_array->array[index] = temp;
  }
}

void bubble_sort_array_void(Array_ptr void_array, Predicate predicate)
{
  int swap_count = 1;
  Object temp;
 for(size_t i = 0; swap_count != 0; i++)
  {
    swap_count = 0;
    FOR_J(1, void_array->length - i)
    {
      if((*predicate)(void_array->array[j], void_array->array[j - 1]))
      {
        swap_count++;
        temp = void_array->array[j];
        void_array->array[j] = void_array->array[j - 1];
        void_array->array[j - 1] = temp;
      }
    }
  }
}

void insertion_sort_array_void(Array_ptr void_array, Predicate predicate)
{
  FOR_I(1, void_array->length)
  {
    for(int j = i; j > 0 && (*predicate)(void_array->array[j], void_array->array[j - 1]); j--)
    {
      Object temp = void_array->array[j];
      void_array->array[j] = void_array->array[j - 1];
      void_array->array[j - 1] = temp;
    }
  }
}