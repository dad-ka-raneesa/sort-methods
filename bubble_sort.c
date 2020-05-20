#include <stdio.h>
#include <string.h>
#include "sort.h"

void bubble_sort_numbers(int *array, int length){
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