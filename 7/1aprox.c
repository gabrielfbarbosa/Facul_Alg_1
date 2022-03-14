/* Nota 10 / 10*/
#include <stdio.h>

int main(void) {

    float x, potX, fat, ciclo, res, erro, conta;

    scanf("%f %f", &x, &erro);

    potX = 1;
    fat = 1;
    ciclo = 1;
    res = 1;
    conta = 0;

    while (  res >= erro  ) {

        potX = potX * x; /* Potencia de X^1..X^2..X^3..*/
        fat = fat * ciclo; /* 1! .. 2! .. 3! ...*/
        res = potX / fat;
 
        printf("Ciclo: %.0f\n", ciclo);

        printf("x %.0f / %.0f n! = %f\n", ciclo, potX, fat);
        
        printf("(x^n/n!) %f < Erro: %f\n\n", res,  erro);        
        
        conta = conta + res;
        
        ciclo = ciclo + 1;
    }
        printf("(x^n/n!) %f < Erro: %f\n\n", res,  conta);
    
    return 0;
}
