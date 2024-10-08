/*
    lab5 main method to test new ratio struct
*/

#include <stdlib.h>
#include <stdio.h>
#include "ratio.h"

int main(int argc, char *argv[]){
    
    ratio *r1, *r2, *r3;

    r1 = create_ratio(2,3);
    printf("r1 before modification: ");
    print_ratio(r1);

    set_ratio_numerator(r1, 3);
    printf("r1 after changing numerator to 3: ");
    print_ratio(r1);

    set_ratio_denominator(r1, 6);
    printf("r1 after changing denominator to 6: ");
    print_ratio(r1);


    r2 = create_ratio(5,7);
    printf("r2 before modification: ");
    print_ratio(r2);

    printf("r2 numerator: %d\nr2 denominator: %d\n", get_ratio_numerator(r2), get_ratio_denominator(r2));


    r3 = create_ratio(1,1);
    printf("r3 before modification: ");
    print_ratio(r3);

    set_ratio_mixed(r3, 3, 2, 3);
    printf("r3 after changing to 3 2/3: ");
    print_ratio(r3);
    printf("r3 after simplifying: ");
    print_ratio_mixed(r3);

    return 0;
}