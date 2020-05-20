#include "sort_arrays_void.h"

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