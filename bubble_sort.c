#include <stdio.h>
#include "sort.h"

void bubble_sort_numbers(int *array, int length){
  int swap_count, temp;
  swap_count = 1;
  for(size_t i = 0; swap_count != 0; i++){
    swap_count = 0;
    FOR_J(1, length - i){
      if(array[j - 1] > array [j]){
        swap_count++;
        temp = array[j];
        array[j] = array[j - 1];
        array[j - 1] = temp;
      }
    }
  }
}