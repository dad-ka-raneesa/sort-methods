#include <stdio.h>
#include "sort.h"

void insertion_sort_numbers(int *array, int length){
  int temp;
  FOR_I(1, length){
    for(int j = i; j > 0 && array[j] < array[j - 1]; j--)
    {
      temp = array[j];
      array[j] = array[j - 1];
      array[j - 1] = temp;
    }
  }
}