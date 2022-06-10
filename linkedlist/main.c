#include "linkedlist.h"


void main() 
{
  LinkedList_t* p_ll = malloc(sizeof(LinkedList_t));
  *p_ll = (LinkedList_t) {NULL, &create, &insert_at_head, &insert_at_tail, &delete_node, &delete_head, &delete_all, &insert, &print};
  p_ll->head = p_ll->create(10);
  p_ll->insert(p_ll->head, 20);
  p_ll->insert(p_ll->head, 30);
  p_ll->insert(p_ll->head, 40);
  p_ll->insert(p_ll->head, 50);

  p_ll->print(p_ll->head);
  free(p_ll);
}
