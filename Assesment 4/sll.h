/*
  Header file for a singly-linked list structure that holds int values

  Jim Teresco, Siena College, CSIS 330, Spring 2012

  Initial implementation:
  Fri Feb  3 11:02:04 EST 2012
*/

typedef struct sll_node {
  int value;
  struct sll_node *next;
} sll_node;

typedef struct sll {
  struct sll_node *head;
  struct sll_node *tail;
} sll;


extern sll *create_sll();
extern void sll_add_to_tail(sll *q, int value);
extern void sll_add_to_head(sll *q, int value);
extern int sll_get(sll *q, int position);
extern int sll_get_head(sll *q);
extern int sll_get_tail(sll *q);
extern int sll_remove_from_head(sll *q);
extern int sll_remove_from_tail(sll *q);
extern void sll_print_contents(sll *q);
extern int sll_isempty(sll *q);
extern void sll_destroy(sll *q);

extern sll *create_queue();
extern void enque(sll *l, int value);
extern int deque(sll *l);
extern int is_empty(sll *l);
extern void deallocate(sll *l);