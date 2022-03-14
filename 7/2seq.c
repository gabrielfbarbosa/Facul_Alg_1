/* Nota 10 / 10 */
#include <stdio.h>

int main(void) {

    int resto, num, invertido, auxNum, comparar, divi, primo, parente, soma, mod, auxMod;

    scanf("%d", &num);

    resto = 0; /* Para inverter o numero */
    soma = 0; /* Somar a seguencia de unidades */ 


    while ( num != 0 ) { /* quando entrada for 0 'para o programa' */
        
        auxNum = num; /* para pegar o primeiro numero digitado*/
        
        comparar = num; /* Para fazer a comparação se palíndromo */
        
        scanf("%d", &num); /* Lendo novas entradas*/
        
        divi = 0; /*Auxiliar na divisão para saber se é primo*/
        primo = 0; /* Somar com resto = 0*/
        while(divi < auxNum){ /* Sbaer se é primo Ok*/
            divi++; 
            parente = auxNum % divi;
            if(parente == 0) {
                primo++; /*Somando para saber se é primo*/
            }
        }
        auxMod = auxNum; /* Para a soma das unidades*/
        while(auxMod > 0) { 
            mod = auxMod % 10;
            soma = soma + mod;
            auxMod = auxMod / 10;
        }
        
        while (auxNum > 0) { /* Inverter unidades OK*/
            invertido = resto*10; /* ultimo valor Primeiro valor indo para o primeiro*/
            resto = auxNum % 10; /* Pegando o ultimo valor */
            invertido = invertido + resto; /* Somando os valores para ficar em ordem*/
            auxNum = auxNum / 10; /* eliminando numero ja utilizado*/
            resto = invertido;
        }
        if(comparar == invertido && primo == 2) { /* Comparando se são palíndromes e primos */
            printf ("%d\n", comparar);
        }
        resto = 0;
    }
    printf("%d\n\n", soma);
    
    return 0;
}
