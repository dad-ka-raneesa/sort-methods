#include "sort_arrays.h"

void print_array_numbers(int_ptr array, int length);
void print_array_strings(char_ptr *strings, int length);
void perform_selection_sort(void);
void perform_bubble_sort(void);
void perform_indertion_sort(void);

void print_array_numbers(int_ptr array, int length){
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

void perform_selection_sort(void){
  printf("Selection sort:\n");
  int array1[] = {3, 2, 7, 4, 9, 5, 1, 6, 8, 3};
  // int array1[] = {16,5,28,10,98,46,10,7,79,90,57,5,81,40,37,45,35,21,45,61,58,42,80,85,18,14,95,63,47,51,42,97,39,41,88,8,6,21,50,6,44,18,35,36,65,17,3,7,42,40,62,92,92,79,84,18,9,50,10,86,78,19,83,69,88,10,41,71,78,81,71,65,59,74,32,46,70,76,76,85,36,78,27,76,47,30,34,59,62,82,82,3,54,26,8,87,84,23,45,47};
  printf("Original array : ");
  print_array_numbers(array1, 10);
  selection_sort_numbers(array1, 10);
  printf("Sorted array : ");
  print_array_numbers(array1, 10);

  char_ptr strings1[] = {"hello", "he", "hell", "h"};
  printf("\nOriginal array : ");
  print_array_strings(strings1, 4);
  printf("Sorted array : ");
  selection_sort_strings(strings1, 4);
  print_array_strings(strings1, 4);
}

void perform_bubble_sort(void){
  printf("\n\nBubble sort:\n");
  // int array2[] = {16,5,28,10,98,46,10,7,79,90,57,5,81,40,37,45,35,21,45,61,58,42,80,85,18,14,95,63,47,51,42,97,39,41,88,8,6,21,50,6,44,18,35,36,65,17,3,7,42,40,62,92,92,79,84,18,9,50,10,86,78,19,83,69,88,10,41,71,78,81,71,65,59,74,32,46,70,76,76,85,36,78,27,76,47,30,34,59,62,82,82,3,54,26,8,87,84,23,45,47};
  // int array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9};
  int array1[] = {3, 2, 7, 4, 9, 5, 1, 6, 8, 3};
  printf("Original array : ");
  print_array_numbers(array1, 10);
  bubble_sort_numbers(array1, 10);
  printf("Sorted array : ");
  print_array_numbers(array1, 10);

  char_ptr strings[] = {"hello", "he", "hell", "h"};
  printf("\nOriginal array : ");
  print_array_strings(strings, 4);
  printf("Sorted array : ");
  bubble_sort_strings(strings, 4);
  print_array_strings(strings, 4);
}

void perform_insertion_sort(void){
  printf("\n\nInsertion sort:\n");
  // int array3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9};
  // int array3[] = {16,5,28,10,98,46,10,7,79,90,57,5,81,40,37,45,35,21,45,61,58,42,80,85,18,14,95,63,47,51,42,97,39,41,88,8,6,21,50,6,44,18,35,36,65,17,3,7,42,40,62,92,92,79,84,18,9,50,10,86,78,19,83,69,88,10,41,71,78,81,71,65,59,74,32,46,70,76,76,85,36,78,27,76,47,30,34,59,62,82,82,3,54,26,8,87,84,23,45,47};
  int array[] = {3, 2, 7, 4, 9, 5, 1, 6, 8, 3};
  printf("Original array : ");
  print_array_numbers(array, 10);
  insertion_sort_numbers(array, 10);
  printf("Sorted array : ");
  print_array_numbers(array, 10);

  char_ptr strings[] = {"hello", "he", "hell", "h"};
  printf("\nOriginal array : ");
  print_array_strings(strings, 4);
  printf("Sorted array : ");
  bubble_sort_strings(strings, 4);
  print_array_strings(strings, 4);
}

int main(void){
  perform_selection_sort();
  perform_bubble_sort();
  perform_insertion_sort();
  return 0;
}