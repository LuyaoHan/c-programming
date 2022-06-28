#include "linkedlist.h"

void linkedlist_test()
{
  LinkedList_t* p_ll = malloc(sizeof(LinkedList_t));
  p_ll->head = NULL;


  p_ll->head = insert_at_head(p_ll->head, 0);
  p_ll->head = insert_at_head(p_ll->head, 1);
  p_ll->head = insert_at_head(p_ll->head, 2);
  p_ll->head = insert_at_head(p_ll->head, 3);
  p_ll->head = insert_at_head(p_ll->head, 4);
  p_ll->head = insert_at_head(p_ll->head, 5);

  print(p_ll->head);
  print_recursive(p_ll->head);


  print_reverse_recursive(p_ll->head);
  free(p_ll);
}

void main() 
{
  linkedlist_test();
}
