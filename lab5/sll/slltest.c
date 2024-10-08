/*
  Test cases for a singly linked list structure that holds int values

  Jim Teresco, Siena College, CSIS 330, Spring 2012

  Initial implementation:
  Fri Feb  3 16:31:11 EST 2012

*/

#include <stdio.h>
#include "sll.h"

int main(int argc, char *argv[]) {

  sll *list1, *list2;
  int i;

  // create empty lists
  list1 = create_sll();
  list2 = create_sll();

  // print empty lists:
  printf("Contents of list1 (isempty: %d): ", sll_isempty(list1));
  sll_print_contents(list1);
  printf("Contents of list2 (isempty: %d): ", sll_isempty(list2));
  sll_print_contents(list2);

  // add some values to each
  printf("Adding 7 to list1 head.\n");
  sll_add_to_head(list1, 7);
  printf("Adding 12 to list2 head.\n");
  sll_add_to_head(list2, 12);
  printf("Adding 9 to list2 head.\n");
  sll_add_to_head(list2, 9);
  printf("Adding 17 to list1 tail.\n");
  sll_add_to_tail(list1, 17);
  printf("Adding 23 to list1 head.\n");
  sll_add_to_head(list1, 23);
  printf("Adding 53 to list2 head.\n");
  sll_add_to_head(list2, 53);

  // print contents of lists:
  printf("Contents of list1 (isempty: %d): ", sll_isempty(list1));
  sll_print_contents(list1);
  printf("Contents of list2 (isempty: %d): ", sll_isempty(list2));
  sll_print_contents(list2);

  printf("head of list1: %d\n", sll_get_head(list1));
  printf("tail of list1: %d\n", sll_get_tail(list1));
  printf("head of list2: %d\n", sll_get_head(list2));
  printf("tail of list2: %d\n", sll_get_tail(list2));

  // modify the lists some more
  printf("Adding 27 to list1 head.\n");
  sll_add_to_head(list1, 27);
  printf("Adding 121 to list2 head.\n");
  sll_add_to_head(list2, 121);
  printf("Adding 91 to list2 head.\n");
  sll_add_to_head(list2, 91);
  printf("Adding 170 to list1 tail.\n");
  sll_add_to_tail(list1, 170);
  printf("Adding 21 to list1 head.\n");
  sll_add_to_head(list1, 21);
  printf("Adding 50 to list2 head.\n");
  sll_add_to_head(list2, 50);
  printf("Removing list1 head.\n");
  sll_remove_from_head(list1);
  printf("Removing list2 head.\n");
  sll_remove_from_head(list2);
  printf("Removing list2 tail.\n");
  sll_remove_from_tail(list2);
  printf("Removing list1 tail.\n");
  sll_remove_from_head(list1);

  // print contents of lists:
  printf("Contents of list1 (isempty: %d): ", sll_isempty(list1));
  sll_print_contents(list1);
  printf("Contents of list2 (isempty: %d): ", sll_isempty(list2));
  sll_print_contents(list2);

  printf("head of list1: %d\n", sll_get_head(list1));
  printf("tail of list1: %d\n", sll_get_tail(list1));
  printf("head of list2: %d\n", sll_get_head(list2));
  printf("tail of list2: %d\n", sll_get_tail(list2));

  for (i=0; i<4; i++) {
    printf("list2 at position %d is %d\n", i, sll_get(list2, i));
  }
  for (i=0; i<4; i++) {
    printf("list2 at position %d is %d\n", i, sll_get(list2, i));
  }

  // drain the lists
  while (!sll_isempty(list1)) {
    printf("removed from head of list1: %d\n", sll_remove_from_head(list1));
  }

  while (!sll_isempty(list2)) {
    printf("removed from tail of list2: %d\n", sll_remove_from_tail(list2));
  }

  // print contents of lists:
  printf("Contents of list1 (isempty: %d): ", sll_isempty(list1));
  sll_print_contents(list1);
  printf("Contents of list2 (isempty: %d): ", sll_isempty(list2));
  sll_print_contents(list2);

  printf("Destroying both lists.\n");
  sll_destroy(list1);
  sll_destroy(list2);

  // recreate one and destroy when not empty
  printf("Recreating list1\n");
  list1 = create_sll();
  printf("Adding 27 to list1 head.\n");
  sll_add_to_head(list1, 27);
  printf("Adding 121 to list1 head.\n");
  sll_add_to_head(list1, 121);
  printf("Adding 91 to list1 head.\n");
  sll_add_to_head(list1, 91);

  printf("Destroying non-empty list1\n");
  sll_destroy(list1);


  return 0;
}