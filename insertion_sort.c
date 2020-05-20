#include <stdio.h>
#include <string.h>
#include "sort.h"

void insertion_sort_numbers(int *array, int length){
  int temp;
  FOR_I(1, length)
  {
    for(int j = i; j > 0 && array[j] < array[j - 1]; j--)
    {
      // printf("inside\n");
      temp = array[j];
      array[j] = array[j - 1];
      array[j - 1] = temp;
    }
  }
}

void insertion_sort_strings(char_ptr *strings, int length)
{
  char_ptr temp;
  FOR_I(1, length)
  {
    for(int j = i; j > 0 && strcmp(strings[j], strings[j - 1]) < 0; j--)
    {
      // printf("inside\n");
      temp = strings[j];
      strings[j] = strings[j - 1];
      strings[j - 1] = temp;
    }
  }
}