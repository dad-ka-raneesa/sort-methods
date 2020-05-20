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

Array_ptr create_array_void(int);
void selection_sort_array_void(Array_ptr void_array, Predicate predicate);
#endif