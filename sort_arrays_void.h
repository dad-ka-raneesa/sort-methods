#ifndef __SORT_ARRAYS_VOID_H_
#define __SORT_ARRAYS_VOID_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort_arrays.h"

typedef void *Object;

typedef enum
{
  False,
  True
} Bool;

typedef struct
{
  Object *array;
  int length;
} Array;

typedef Array *Array_ptr;

typedef Bool (*Predicate)(Object, Object);
typedef void (*Displayer)(Object);

Object create_int(int value);
Object create_char(char value);
int find_length(char *value);
char *create_string(char *value);
Array_ptr create_array_void(int);
void selection_sort_array_void(Array_ptr void_array, Predicate predicate);
void bubble_sort(Array_ptr void_array, Predicate predicate);
void bubble_sort_array_void(Array_ptr void_array, Predicate predicate);
void insertion_sort_array_void(Array_ptr void_array, Predicate predicate);
#endif