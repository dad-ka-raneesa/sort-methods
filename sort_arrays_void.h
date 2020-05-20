#ifndef __SORT_ARRAYS_VOID_H_
#define __SORT_ARRAYS_VOID_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort_arrays.h"
#include "array_void.h"

typedef Bool (*Predicate)(Object, Object);
typedef void (*Displayer)(Object);

void selection_sort_array_void(Array_ptr void_array, Predicate predicate);
void bubble_sort(Array_ptr void_array, Predicate predicate);
void bubble_sort_array_void(Array_ptr void_array, Predicate predicate);
void insertion_sort_array_void(Array_ptr void_array, Predicate predicate);

#endif