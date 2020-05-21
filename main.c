#include "sort.h"

Bool is_number_lesser_than(Object a, Object b)
{
  return *(int_ptr)a < *(int_ptr)b;
}

Bool is_char_lesser_than(Object a, Object b)
{
  return *(char_ptr)a < *(char_ptr)b;
}

Bool is_string_lesser_than(Object a, Object b)
{
  return strcmp((char_ptr)a, (char_ptr)b) < 0;
}

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

void print_number(Object data)
{
  printf("%d ", *(int_ptr)data);
}

void print_char(Object data)
{
  printf("%c ", *(char_ptr)data);
}

void print_string(Object data)
{
  printf("%s ", (char_ptr)data);
}

void print_array_void(Array_ptr void_array, Displayer display)
{
  FOR_I (0, void_array->length)
  {
    (*display)(void_array->array[i]);
  }
  printf("\n");
}

void display_list(List_ptr list, Displayer displayer)
{
  Node_ptr p_walk = list->first;
  while (p_walk != NULL)
  {
    (*displayer)(p_walk->element);
    p_walk = p_walk->next;
  }
}

Array_ptr create_array_numbers(void){
  Array_ptr numbers = create_array_void(7);
  numbers->array[0] = create_int(5);
  numbers->array[1] = create_int(10);
  numbers->array[2] = create_int(6);
  numbers->array[3] = create_int(8);
  numbers->array[4] = create_int(13);
  numbers->array[5] = create_int(12);
  numbers->array[6] = create_int(5);
  return numbers;
}

Array_ptr create_array_chars(void){
  Array_ptr chars = create_array_void(7);
  chars->array[0] = create_char('h');
  chars->array[1] = create_char('g');
  chars->array[2] = create_char('e');
  chars->array[3] = create_char('f');
  chars->array[4] = create_char('d');
  chars->array[5] = create_char('b');
  chars->array[6] = create_char('a');
  return chars;
}

Array_ptr create_array_strings(void){
  Array_ptr strings = create_array_void(4);
  strings->array[0] = create_string("hi");
  strings->array[1] = create_string("hello");
  strings->array[2] = create_string("hill");
  strings->array[3] = create_string("hell");
  return strings;
}

void perform_selection_sort(void){
  printf("Selection sort (arrays):\n");
  int array1[] = {3, 2, 7, 4, 9, 5, 1, 6, 8, 3};
  // int array1[] = {16,5,28,10,98,46,10,7,79,90,57,5,81,40,37,45,35,21,45,61,58,42,80,85,18,14,95,63,47,51,42,97,39,41,88,8,6,21,50,6,44,18,35,36,65,17,3,7,42,40,62,92,92,79,84,18,9,50,10,86,78,19,83,69,88,10,41,71,78,81,71,65,59,74,32,46,70,76,76,85,36,78,27,76,47,30,34,59,62,82,82,3,54,26,8,87,84,23,45,47};
  printf("Original array : ");
  print_array_numbers(array1, 10);
  selection_sort_numbers(array1, 10);
  printf("Sorted array : ");
  print_array_numbers(array1, 10);

  char_ptr strings1[] = {"hello", "he", "hell", "h"};
  printf("Original array : ");
  print_array_strings(strings1, 4);
  printf("Sorted array : ");
  selection_sort_strings(strings1, 4);
  print_array_strings(strings1, 4);

  printf("\nSelection sort (arrays void):\n");
  Array_ptr numbers = create_array_numbers();
  printf("Original array : ");
  print_array_void(numbers, print_number);
  selection_sort_array_void(numbers, &is_number_lesser_than);
  printf("Sorted array : ");
  print_array_void(numbers, print_number);

  Array_ptr chars = create_array_chars();
  printf("Original array : ");
  print_array_void(chars, print_char);
  selection_sort_array_void(chars, &is_char_lesser_than);
  printf("Sorted array : ");
  print_array_void(chars, print_char);

  Array_ptr strings2 = create_array_strings();
  printf("Original array : ");
  print_array_void(strings2, print_string);
  selection_sort_array_void(strings2, &is_string_lesser_than);
  printf("Sorted array : ");
  print_array_void(strings2, print_string);

  printf("\nSelection sort (linked list):\n");
  List_ptr list = create_list();
  add_to_list(list, create_int(8));
  add_to_list(list, create_int(5));
  add_to_list(list, create_int(9));
  add_to_list(list, create_int(3));
  printf("Original list : ");
  display_list(list, &print_number);
  selection_sort_linked_list(list, &is_number_lesser_than);
  printf("\nSorted list : ");
  display_list(list, &print_number);

  List_ptr a = create_list();
  add_to_list(a, create_string("hi"));
  add_to_list(a, create_string("hello"));
  add_to_list(a, create_string("hell"));
  add_to_list(a, create_string("h"));
  printf("Original list : ");
  display_list(a, &print_string);
  selection_sort_linked_list(a, &is_string_lesser_than);
  printf("\nSorted list : ");
  display_list(a, &print_string);
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

  char_ptr strings1[] = {"hello", "he", "hell", "h"};
  printf("Original array : ");
  print_array_strings(strings1, 4);
  printf("Sorted array : ");
  bubble_sort_strings(strings1, 4);
  print_array_strings(strings1, 4);

  printf("\nBubble sort (arrays void):\n");
  Array_ptr numbers = create_array_numbers();
  printf("Original array : ");
  print_array_void(numbers, print_number);
  bubble_sort_array_void(numbers, &is_number_lesser_than);
  printf("Sorted array : ");
  print_array_void(numbers, print_number);

  Array_ptr chars = create_array_chars();
  printf("Original array : ");
  print_array_void(chars, print_char);
  bubble_sort_array_void(chars, &is_char_lesser_than);
  printf("Sorted array : ");
  print_array_void(chars, print_char);

  Array_ptr strings2 = create_array_strings();
  printf("Original array : ");
  print_array_void(strings2, print_string);
  bubble_sort_array_void(strings2, &is_string_lesser_than);
  printf("Sorted array : ");
  print_array_void(strings2, print_string);
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
  printf("Original array : ");
  print_array_strings(strings, 4);
  printf("Sorted array : ");
  bubble_sort_strings(strings, 4);
  print_array_strings(strings, 4);

  printf("\nInsertion sort (arrays void):\n");
  Array_ptr numbers = create_array_numbers();
  printf("Original array : ");
  print_array_void(numbers, print_number);
  insertion_sort_array_void(numbers, &is_number_lesser_than);
  printf("Sorted array : ");
  print_array_void(numbers, print_number);

  Array_ptr chars = create_array_chars();
  printf("Original array : ");
  print_array_void(chars, print_char);
  insertion_sort_array_void(chars, &is_char_lesser_than);
  printf("Sorted array : ");
  print_array_void(chars, print_char);

  Array_ptr strings2 = create_array_strings();
  printf("Original array : ");
  print_array_void(strings2, print_string);
  insertion_sort_array_void(strings2, &is_string_lesser_than);
  printf("Sorted array : ");
  print_array_void(strings2, print_string);
}

int main(void){
  perform_selection_sort();
  perform_bubble_sort();
  perform_insertion_sort();
  return 0;
}