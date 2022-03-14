/* Nota 10/10 */
#include <stdio.h>

int main(void) {
    
    int linha, coluna, li, co, val, aux, limpar, somaLi, lipar, somaLp, numPar, caso; 
    scanf("%d %d", &linha, &coluna);

    aux = 0; /* Contagem dos numeros */
    somaLi = 0; /* Soma da linha impar */
    somaLp = 0; /* Soma da linha par */
    numPar = 0; /* Qunatidade de numeros pares no retangulo */

    for (li = 1; li <= linha; li++){ /* Limitando linhas */
        for (co = 1; co <= coluna; co++){ /* Limitando colunas*/
            for (val = 1; val <= 1; val++){ /* Somando as unidades em seguencia */
                aux = aux + val;
                printf(" %d", aux);
            }

            if ( linha % 2 >= 1) { /* Caso linha impar*/
                limpar = ( linha / 2 ) + 1;

                if(limpar == li){ /* Somando a linha do meio*/
                    somaLi = somaLi + aux;
                }
                caso = 1; /* Caso para printar na tela so no final*/
            }else{ /* Caso linha par*/
                lipar = (linha / 2);
                limpar = ( linha / 2 ) + 1;
               
                if(limpar == li){ /* Somando linha/2*/
                    somaLi = somaLi + aux;  
                }
                if(li == lipar){ /* Somando (linha/2) + 1*/
                    somaLp = somaLp + aux;
                }
                caso = 2; /* Caso para printar na tela so no final*/
            }
            if(aux % 2 == 0){ /* Contando numeros pares no retangulo*/
                numPar++;
            }

        }
        printf("\n");
    }
    if(caso == 1){ /* Utilizando Casos para fazer o print na tela */
        printf("%d\n", somaLi );
    }else{
        printf("%d\n%d\n", somaLp, somaLi );
    }

    printf("%d",  numPar);
    
    printf("\n\n");

    return 0;
}
