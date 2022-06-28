#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int data;
  struct Node* next;
} Node_t;

/*
typedef struct {
  Node_t* head; 
  Node_t* (*create) (int);
  Node_t* (*insert_at_head) (Node_t*, int);
  void (*insert_at_tail) (Node_t*, int);
  void (*delete_node) (Node_t*, int);
  void (*delete_head) (Node_t*);
  void (*delete_all) (Node_t*);
  void (*insert) (Node_t*, int);
  void (*print) (Node_t*);
} LinkedList_t;
*/

typedef struct {
  Node_t * head;
} LinkedList_t;

Node_t* insert_at_head(Node_t* head, int dataToStore);
void insert_at_tail(Node_t* head, int dataToStore);
void delete_node(Node_t* head, int dataToDelete);
void delete_head(Node_t* head);
void delete_all(Node_t* head);
void insert(Node_t* head, int dataToInsert);
void print(Node_t* head);
void print_recursive(Node_t *curr);

