#ifndef __SORT_H_
#define __SORT_H_

typedef char *char_ptr;

#define FOR_I(start, limit) for (size_t i = start; i < limit; i++)
#define FOR_J(start, limit) for (size_t j = start; j < limit; j++)

void selection_sort_numbers(int *array, int length);
void selection_sort_strings(char_ptr *strings, int length);
void bubble_sort_numbers(int *array, int length);
void bubble_sort_strings(char_ptr *strings, int length);

#endif