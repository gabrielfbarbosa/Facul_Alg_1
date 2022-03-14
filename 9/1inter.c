/* Nota 10 / 10 */
#include <stdio.h>

int main(void) {
    
    int seq[30], seqFinal[30], ciclo; /*seq Inicial = 15 para cada caso, como coloquei tudo direto em apenas um vetor entao vetor = 15 + 15 */
    int n1, n2, num, nFinal, i, x, d, aux, auxN1, auxN2;

    scanf("%d", &n1); /* Recebe primeiro tamanho */
    ciclo = 0; /*Para auxiliar no preenchimento do vetor*/
    nFinal = 0; /* Para calcular a qunatidade de comparaçoes no for*/

    while(n1 != 51){ /* Condição de parada*/
        auxN1 = n1;
        while(auxN1 != 0) { /* condição de fim de vetor*/
            scanf("%d", &num);
            seq[ciclo] = num;
            auxN1 -= 1;
            ciclo++;
        }

        scanf("%d", &n2); /* Recebe segundo tamanho*/
        auxN2 = n2;
        while(auxN2 != 0) { /* Condição fim segundo vetor*/
            scanf("%d", &num);
            seq[ciclo] = num; /*Recebendo em um unico vetor para depois so ordenar*/
            auxN2 -= 1;
            ciclo++;            
        }
        
        nFinal = n1 + n2 ;/*Quantidade de verificaçoes para ordenar*/


        for(i = 0; i < nFinal; i++){ /* Pega todos os vetore*/
            
            for( x = i; x < nFinal; x++ ) { /* Compara com ele mesmo e os proximos */
                if(seq[i] > seq[x]) { /*Caso para troca*/
                    aux = seq[i]; /*recebe o valor "fixado" para comparação*/
                    seq[i] = seq[x]; /*Troca pelo atual*/
                    seq[x] = aux; /*Atual recebe o valor que estava fixado pelo for de fora*/
                }
            }
        }

        for (d = 0; d < nFinal; d++) { /* Mostrar a sequencia ordenada*/
            seqFinal[d] = seq[d]; /* Para receber todos no vetor de */
            printf("%d ", seqFinal[d]);
        }
        ciclo = 0; /*Zerando para novo par de vetores*/
        
        scanf("%d", &n1); /*Recebe o novo tamanho do primeiro Vetor*/
    }
    printf("\n");
    return 0;
} 