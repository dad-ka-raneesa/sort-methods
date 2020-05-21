#include "sort.h"

void bubble_sort_numbers(int_ptr array, int length){
  int swap_count = 1;
  int temp;
  for(size_t i = 0; swap_count != 0; i++){
    swap_count = 0;
    FOR_J(1, length - i){
      // printf("inside\n");
      if(array[j - 1] > array [j]){
        swap_count++;
        temp = array[j];
        array[j] = array[j - 1];
        array[j - 1] = temp;
      }
    }
  }
}

void bubble_sort_strings(char_ptr *strings, int length){
  int swap_count = 1;
  char_ptr temp;
  for(size_t i = 0; swap_count != 0; i++){
    swap_count = 0;
    FOR_J(1, length - i){
      // printf("inside\n");
      if(strcmp(strings[j], strings[j - 1]) < 0){
        swap_count++;
        temp = strings[j];
        strings[j] = strings[j - 1];
        strings[j - 1] = temp;
      }
    }
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

void bubble_sort_linked_list(List_ptr list, Predicate predicate)
{
  Node_ptr p_walk = list->first;
  Node_ptr next = NULL;
  int swap_count = 1;
  Object temp;

  for(int i = 0; p_walk != NULL && swap_count != 0; i++)
  {
    swap_count = 0;
    next = list->first->next;

    for(int j = 1; j < list->length - i && next != NULL; j++)
    {
      if((*predicate)(next->element, next->prev->element))
      {
        swap_count++;
        temp = next->element;
        next->element = next->prev->element;
        next->prev->element = temp;
      }
      next = next->next;
    }
    p_walk = p_walk->next;
  }
}  