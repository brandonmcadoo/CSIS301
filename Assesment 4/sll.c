/*
  Implementation file for a singly linked list structure that holds int values

  Jim Teresco, Siena College, CSIS 330, Spring 2012

  Initial implementation:
  Fri Feb  3 11:02:04 EST 2012
*/

#include <stdlib.h>
#include <stdio.h>
#include "sll.h"

/* create a new, empty, sll structure */
sll *create_sll() {

  sll *l = (sll *)malloc(sizeof(sll));
  l->head = NULL;
  l->tail = NULL;
  return l;
}

/* check if the list is empty.  This is the case if the head pointer is NULL */
int sll_isempty(sll *l) {

  return l->head == NULL;
}


/* add to the front of the list */
void sll_add_to_head(sll *l, int value) {

  sll_node *newnode = (sll_node *)malloc(sizeof(sll_node));

    if(l->head == NULL){
        l->tail = newnode;
    }

  newnode->value = value;
  newnode->next = l->head;

  l->head = newnode;

}

/* add to the end of the list */
void sll_add_to_tail(sll *l, int value) {

  sll_node *newnode = (sll_node *)malloc(sizeof(sll_node));

  newnode->value = value;
  newnode->next = NULL;

  if (l->head == NULL) {
    l->head = newnode;
    l->tail = newnode;
  }
  else {
    sll_node *f = l->head;
    while (f->next != NULL) {
      f = f->next;
    }
    l->tail = newnode;
    f->next = newnode;
  }

}


/* get the value at the given position in the list */
int sll_get(sll *l, int position) {

  int i;
  sll_node *f = l->head;

  for (i=0; i<position; i++) {
    if (f != NULL) f = f->next;
  }
  if (f != NULL) return f->value;
  fprintf(stderr,"(sll_get) cannot get item at position %d from list\n", position);
  return 0;

}

/* get the value at the head of the list */
int sll_get_head(sll *l) {

  if (l->head != NULL) {
    return l->head->value;
  }
  fprintf(stderr,"(sll_get) cannot get item from empty list\n");
  return 0;
  
}

/* get value from the end of the list */
int sll_get_tail(sll *l) {
  
  sll_node *f;

  if (l->tail != NULL) {
    f = l->tail;
    return f->value;
  }
  fprintf(stderr,"(sll_get) cannot get item from empty list\n");
  return 0;
}

/* remove from the head of the list, return value removed */
int sll_remove_from_head(sll *l) {

  if (l->head == NULL) {
    fprintf(stderr, "(sll_remove_from_head) Attempt to remove from empty list!\n");
    return 0;
  }
  int retval = l->head->value;
  sll_node *rmme = l->head;
  l->head = l->head->next;
  free(rmme);

  return retval;
}

/* remove from the tail of the list, return value removed */
int sll_remove_from_tail(sll *l) {

  if (l->head == NULL) {
    fprintf(stderr, "(sll_remove_from_tail) Attempt to remove from empty list!\n");
    return 0;
  }
  int retval = l->head->value;
  if (l->head->next == NULL) {
    free(l->head);
    l->head = NULL;
    return retval;
  }

  sll_node *ptr = l->head;
  sll_node *trail = ptr;

  while (ptr->next != NULL) {
    retval = ptr->next->value;
    trail = ptr;
    ptr = ptr->next;
  }
  free(ptr);
  trail->next = NULL;
  l->tail = trail;

  return retval;
}

/* destroy a possibly non-empty list */
void sll_destroy(sll *l) {

  sll_node *ptr = l->head;
  while (ptr) {
    sll_node *rmme = ptr;
    ptr = ptr->next;
    free(rmme);
  }
  free(l);
}

/* print the contents of a list */
void sll_print_contents(sll *l) {

  sll_node *f = l->head;
  printf("<");
  while (f != NULL) {
    printf("%d", f->value);
    f = f->next;
    if (f != NULL) printf(", ");
  }
  printf(">\n");
}

sll *create_queue() {
    sll *l;
    l = create_sll();
    return l;
}

void enque(sll *l, int value){
    sll_add_to_tail(l, value);
}

int deque(sll *l){
    int temp = sll_get_head(l);
    sll_remove_from_head(l);
    return temp;
}

int is_empty(sll *l){
    return sll_isempty(l);
}

void deallocate(sll *l){
    sll_destroy(l);
}