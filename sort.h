#ifndef __SORT_H_
#define __SORT_H_

#define FOR_I(start, limit) for (size_t i = start; i < limit; i++)
#define FOR_J(start, limit) for (size_t j = start; j < limit; j++)

void selection_sort(int *array, int length);

#endif