/* Nota 10/ 10*/
#include <stdio.h>

int main(void) {

    char simb;
    int rot, num, pot, auxNum, cont, modNum;

    scanf("%c %d %d", &simb, &rot, &num);
     
    while (simb != 'X') { /* Situação de parada*/
        pot = 1; /* Auxiliar para saber qual potencia de 10 vou precisar*/
        cont = 0; /* Contador de quantas vezes fazer a rotação*/
        auxNum = num;/*Auxiliar para fazer a rotção do numero*/
        num /= 10; /*Removendo um numero para remover a potencia de 10⁰*/

        while (num != 0){ /*Contando as potencias*/
            pot *= 10 ; /* valor da potencia para cada unidade*/
            num = num/10;
        }
        if ( simb == '>' ) { /* condição para a rotação*/
            while ( cont < rot) {
                cont++;
                modNum = auxNum % 10;  /*'Pegando' a ultima unidade*/
                auxNum /= 10;
                auxNum = (modNum * pot) + auxNum; /*Somando o restante*/
            } 
            printf ("%d\n", auxNum );
        }else{
            if ( simb == '<'){ /* condição para a rotação*/
                while ( cont < rot) {
                    cont++;
                    modNum = auxNum / pot; /*'Pegando' a primerioa unidade*/
                    auxNum %= pot;
                    auxNum = (auxNum * 10) + modNum; /*Somando o restante*/
                } 
                printf ("%d\n", auxNum);
            }    
        }
        scanf("%c", &simb);
        if(simb == 'X'){ /*Conferindo condição de parada do laço*/
            rot = 0;
            num = 0;    
        }else {
            scanf("%d %d",&rot , &num);
        }
    }
    return 0;
}
