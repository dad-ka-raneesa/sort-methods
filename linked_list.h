#ifndef __LINKEDLIST_H_
#define __LINKEDLIST_H_

#include "sort.h"

typedef struct node
{
  Object element;
  struct node *prev;
  struct node *next;
} Node;

typedef Node *Node_ptr;

typedef struct
{
  Node *first;
  Node *last;
  int length;
} LinkedList;

typedef LinkedList *List_ptr;

typedef struct
{
  Node *prev;
  Node *curr;
} Prev_curr_pair;

List_ptr create_list(void);
Node_ptr create_node(Object);

Bool add_to_list(List_ptr, Object);

#endif