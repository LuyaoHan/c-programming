#include "linkedlist.h"


void main() 
{
  LinkedList_t* p_ll = malloc(sizeof(LinkedList_t));

  /* Link the functions to the function pointers in LinkedList_t struct. */
  *p_ll = (LinkedList_t) {NULL, &create, &insert_at_head, &insert_at_tail, &delete_node, &delete_head, &delete_all, &insert, &print};
  p_ll->head = p_ll->create(10);
  p_ll->insert(p_ll->head, 30);
  p_ll->print(p_ll->head);

  p_ll->head = p_ll->insert_at_head(p_ll->head, 1);
  p_ll->head = p_ll->insert_at_head(p_ll->head, 2);
  p_ll->head = p_ll->insert_at_head(p_ll->head, 3);
  p_ll->head = p_ll->insert_at_head(p_ll->head, 4);
  p_ll->head = p_ll->insert_at_head(p_ll->head, 5);
  p_ll->print(p_ll->head);

  free(p_ll);
}
