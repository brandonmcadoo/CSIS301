/*
    Assesment #3

    Brandon McAdoo
*/

#include <stdlib.h>
#include <stdio.h>
#include "ratio.h"
#include "gcd.h"

int main(int argc, char *argv[]){

    int num, den;
    ratio *sum;
    sum = create_ratio(0, 1);

    if(argc < 2){
        fprintf(stderr, "Please enter the name of the file.");
        exit(1);
    }
    else if(argc > 2){
        fprintf(stderr, "Please enter only one file.");
        exit(1);
    }

    FILE* ptr = fopen(argv[1], "r");
    if (ptr == NULL) {
        printf("no such file.");
        return 0;
    }

    while (fscanf(ptr, "%d/%d\n", &num, &den) == 2){
        //printf("%d/%d\n", num, den);

        ratio *input;
        input = create_ratio(num, den);

        sum = add_ratios(sum, input);
    }

    print_ratio(sum);
    printf("\n");

}