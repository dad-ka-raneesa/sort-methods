#include <stdio.h>
#include "sort.h"

void selection_sort(int *array, int length){
  int index_of_min, temp;
  FOR_I(0, length){
    index_of_min = i;
    FOR_J(i+1, length){
      if(array[j] < array[index_of_min]){
        index_of_min = j;
      }
    }
    temp = array[i];
    array[i] = array[index_of_min];
    array[index_of_min] = temp;
  }
}