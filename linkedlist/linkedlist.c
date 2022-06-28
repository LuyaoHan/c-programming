#include "linkedlist.h"

Node_t* insert_at_head(Node_t* head, int dataToStore)
{
  Node_t* newNode = malloc(sizeof(Node_t));
  newNode->data = dataToStore;
  newNode->next = head;
  head = newNode;
  return head;
}

void insert_at_tail(Node_t* head, int dataToStore)
{

  Node_t* newNode = malloc(sizeof(Node_t));
  newNode->data = dataToStore;
  newNode->next = NULL;

  /* If there's no node in the linkedlist. */
  if (head == NULL) 
  {
    return;
  }

  Node_t* itr = head;

  /* At the end of this loop, the iterator will stop at the last node. */
  while (itr->next != NULL) 
  {
    itr = itr->next;
  } 

  /* Connect the last node to the new node created. */
  itr->next = newNode;

  return;
}

void delete_node(Node_t* head, int dataToDelete)
{
  if (head == NULL)
  {
    return;
  }

  Node_t* itr = head;
  Node_t* follower = NULL;
  /* At the end of the loop, the iterator will stop at the last node. */
  while (head->next != NULL)
  { 
    /* Checks data to delete. */
    if (itr->data == dataToDelete)
    {
      // If node to delete is the head.
      if (follower == NULL && itr == head)
      {
        Node_t* nodeToDelete = head;
        head = head->next;
        free(nodeToDelete);
      }
      else 
      {
        // If node to delete is other nodes.
        Node_t* nodeToDelete = follower->next;
        follower->next = follower->next->next; 
        free(nodeToDelete);
      }

    }

    follower = itr;
    itr = itr->next;
  }

  return;
}


void delete_head(Node_t* head)
{
  if (head == NULL)
  {
    return;
  }
  Node_t* newHead = head->next;
  free(head);
  head = newHead;
  return;
}
void delete_all(Node_t* head)
{
  while (head != NULL)
  {
    delete_head(head);
  }
  return;
}


void insert(Node_t* head, int dataToInsert)
{
  if (head == NULL)
  {
    return;
  }
 
  Node_t* itr = head;
  /* Iterator will be at the last node at the end of iterations. */
  while (itr->next != NULL) 
  {
    itr = itr->next; 
  }

  Node_t* nodeToInsert = malloc(sizeof(Node_t));
  nodeToInsert->data = dataToInsert;
  nodeToInsert->next = NULL;
  itr->next = nodeToInsert;
  return;
}

void print(Node_t* head)
{
  Node_t* itr = head;
  while (itr != NULL)
  {
    printf("%d --> ", itr->data);
    itr = itr->next;
  }
  printf("NULL\n");
  return;
}



void print_recursive(Node_t *curr)
{
  if (curr == NULL)
  {
    printf("NULL\n");
    return;
  }
  printf("%d --> ", curr->data);
  print_recursive(curr->next);
}


void print_reverse_recursive(Node_t *curr)
{
  if (curr == NULL)
  {
    return;
  }
  print_reverse_recursive(curr->next);
  printf("%d --> ", curr->data);
}
