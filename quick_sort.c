#include "sort.h"

void quick_sort_numbers(int_ptr list, int start_index, int last_index)
{
  if (start_index >= last_index)
    return;
  int temp;
  int pivot = list[last_index];
  int pivot_pos = start_index;
  FOR_I(start_index, last_index)
  {
    // printf("inside\n");
    if (list[i] < pivot)
    {
      temp = list[i];
      list[i] = list[pivot_pos];
      list[pivot_pos] = temp;
      pivot_pos++;
    }
  }
  temp = list[pivot_pos];
  list[pivot_pos] = list[last_index];
  list[last_index] = temp;
  quick_sort_numbers(list, start_index, pivot_pos - 1);
  quick_sort_numbers(list, pivot_pos + 1, last_index);
}