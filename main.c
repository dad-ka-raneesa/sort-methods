#include <stdio.h>
#include "sort.h"

void print_array_numbers(int *array, int length);
void print_array_strings(char_ptr *strings, int length);

void print_array_numbers(int *array, int length){
  FOR_I(0, length){
    printf("%d ", array[i]);
  }
  printf("\n");
}

void print_array_strings(char_ptr *strings, int length){
  FOR_I(0, length){
    printf("%s  ", strings[i]);
  }
  printf("\n");
}

int main(void){
  printf("Selection sort:\n");
  int array1[] = {3, 2, 7, 4, 9, 5, 1, 6, 8, 3};
  printf("Original array : ");
  print_array_numbers(array1, 10);
  selection_sort_numbers(array1, 10);
  printf("Sorted array : ");
  print_array_numbers(array1, 10);

  char_ptr strings[] = {"hello", "he", "hell", "h"};
  printf("\nOriginal array : ");
  print_array_strings(strings, 4);
  printf("Sorted array : ");
  selection_sort_strings(strings, 4);
  print_array_strings(strings, 4);


  printf("\n\nBubble sort:\n");
  // int array2[] = {3, 2, 7, 4, 9, 5, 1, 6, 8, 3};
  int array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9};
  printf("Original array : ");
  print_array_numbers(array2, 10);
  bubble_sort_numbers(array2, 10);
  printf("Sorted array : ");
  print_array_numbers(array2, 10);
  return 0;
}