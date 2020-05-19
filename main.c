#include <stdio.h>
#include "sort.h"

void print_array1(int *array, int length);

void print_array(int *array, int length){
  FOR_I(0, length){
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main(void){
  int array1[] = {3, 2, 7, 4, 9, 5, 1, 6, 8, 3};
  printf("Original array : ");
  print_array(array1, 10);
  selection_sort(array1, 10);
  printf("\nSorted array : ");
  print_array(array1, 10);

  int array2[] = {3, 2, 7, 4, 9, 5, 1, 6, 8, 3};
  printf("\n\nOriginal array : ");
  print_array(array2, 10);
  bubble_sort(array2, 10);
  printf("\nSorted array : ");
  print_array(array2, 10);
  return 0;
}