/*                                                                              
  Practice program 1.6                                                          
                                                                                
  Brandon McAdoo                                                                
 */

#include <stdio.h>
#include <stdlib.h>

#include "isort.h"

int main(int argc, char *argv[]){

  int length = 5;
  int total = 0;
  int sum = 0;
  int tempI;
  char tempC;

  int *input;
  input  = (int*)malloc(length * sizeof(int));

  while((scanf("%d ", &tempI)) == 1){                                                    
    input[total] = tempI;
    total++;

    if (total == length){
      length = length * 2;
      input  = (int*)realloc(input, length * sizeof(int));
    }

  }

    printf("\n");
  for(int i = 0; i < total; i++){
        printf("%d", input[i]);
        if(i != total - 1){
            printf("+");
        } else {
            printf("=");
        }
        sum += input[i];
    }
  printf("%d\n", sum);

    int *arrptr = input;
    isortptr(arrptr, total);

    printf("\n");
    for(int i = 0; i < total; i++){
        printf("%d", input[i]);
        if(i != total - 1){
            printf("+");
        } else {
            printf("=");
        }
    }
    printf("%d\n", sum);

}