/*
    Practice Program 2.2

    Brandon McAdoo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strend(char input1[], char input2[]);

int strend(char input1[], char input2[]){

    if(strlen(input2) > strlen(input1)){
        return 0;
    }

    char temp[strlen(input2)];
    int diff = strlen(input1) - strlen(input2);
    strncpy(temp, input1 + diff, strlen(input2));

    if(strcmp(temp, input2) == 0){
        return 1;
    }

    return 0;
}

int main(int argc, char *argv[]){

    if(argc != 3){
        fprintf(stderr, "Incorrect Number of Inputs\n");
        exit(1);
    }

    printf("%d\n", strend(argv[1], argv[2]));
}