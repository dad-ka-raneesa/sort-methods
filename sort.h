#ifndef __SORT_ARRAYS_H_
#define __SORT_ARRAYS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array_void.h"
#include "linked_list.h"

#define FOR_J(start, limit) for (size_t j = start; j < limit; j++)
#define FOR_I(start, limit) for (size_t i = start; i < limit; i++)

typedef int *int_ptr;
typedef char *char_ptr;

typedef Bool (*Predicate)(Object, Object);
typedef void (*Displayer)(Object);

void selection_sort_numbers(int_ptr array, int length);
void selection_sort_strings(char_ptr *strings, int length);
void bubble_sort_numbers(int_ptr array, int length);
void bubble_sort_strings(char_ptr *strings, int length);
void insertion_sort_numbers(int_ptr array, int length);
void insertion_sort_strings(char_ptr *strings, int length);

void selection_sort_array_void(Array_ptr void_array, Predicate predicate);
void bubble_sort_array_void(Array_ptr void_array, Predicate predicate);
void insertion_sort_array_void(Array_ptr void_array, Predicate predicate);

void selection_sort_linked_list(List_ptr list, Predicate predicate);
void bubble_sort_linked_list(List_ptr list, Predicate predicate);
void insertion_sort_linked_list(List_ptr list, Predicate predicate);

void quick_sort_numbers(int_ptr list, int start_index, int last_index);

#endif