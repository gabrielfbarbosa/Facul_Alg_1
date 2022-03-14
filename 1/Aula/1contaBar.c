#include <stdio.h>

int main(){

    int carlos, andre;
    float felipe, conta;

    scanf("%f", &conta);

    carlos = conta/3;

    andre = carlos;

    felipe = conta - carlos*2;

    printf("%i %i",carlos, andre);

    printf("\n %f", felipe);

    return 0;
}
