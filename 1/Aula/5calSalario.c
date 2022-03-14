#include <stdio.h>

int main(void){
    
    char nome[10];
    int idade;
    float salBru, salLiq, grati, salBruReal;

    scanf("%s %i %f", nome, &idade, &salBru);

    salBru = salBru * 1.38;/* Salario Bruto reajusta a 38%*/

    salBruReal = salBru;

    grati = salBru * 0.20; /* Gratificação */

    salBru = salBru + grati;

    salLiq = salBru - (salBru * 0.15);
    
    printf("\n Nome: %s\n Id: %i\n Bruto: %f\n Liquido: %f\n", nome, idade, salBruReal, salLiq);

    return 0;

}
