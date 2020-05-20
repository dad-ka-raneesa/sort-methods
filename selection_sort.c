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

void selection_sort_numbers(int_ptr array, int length){
  int index_of_min, temp;
  FOR_I(0, length){
    index_of_min = i;
    FOR_J(i + 1, length){
      // printf("inside\n");
      if(array[j] < array[index_of_min]){
        index_of_min = j;
      }
    }
    temp = array[i];
    array[i] = array[index_of_min];
    array[index_of_min] = temp;
  }
}

void selection_sort_strings(char_ptr *strings, int length){
  int index;
  char_ptr temp;  
  FOR_I(0, length){
    index = i;
    FOR_J(i + 1, length){
      // printf("inside\n");
      if(strcmp(strings[j], strings[index]) < 0)
      {
        index = j;
      }
    }
    temp = strings[i];
    strings[i] = strings[index];
    strings[index] = temp;
  }
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
