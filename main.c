#include <stdio.h>
#include "sort.h"

void print_array(int *array, int length);

void print_array(int *array, int length){
  FOR_I(0, length){
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main(void){
  int array[] = {3, 2, 7, 4, 9, 5, 1, 6, 8, 3};
  printf("Original array : ");
  print_array(array, 10);
  return 0;
}