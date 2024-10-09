/*
    testing for queue structure

    Brandon McAdoo
*/

#include <stdlib.h>
#include <stdio.h>
#include "sll.h"

int main(int argc, char *argv[]){
    sll *list1;
    list1 = create_queue();
    printf("The list is empty: %d\n", is_empty(list1));

    enque(list1, 1);
    enque(list1, 2);
    enque(list1, 3);

    printf("The list is empty: %d\n", is_empty(list1));

    printf("Deque: %d\n", deque(list1));
    printf("Deque: %d\n", deque(list1));
    printf("Deque: %d\n", deque(list1));

    printf("The list is empty: %d\n", is_empty(list1));

    enque(list1, 4);
    enque(list1, 5);
    enque(list1, 6);
    printf("Deque: %d\n", deque(list1));
    printf("Deque: %d\n", deque(list1));
    enque(list1, 7);
    enque(list1, 8);
    printf("Deque: %d\n", deque(list1));

    deallocate(list1);
}