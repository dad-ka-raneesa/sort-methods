#include "sort.h"

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
