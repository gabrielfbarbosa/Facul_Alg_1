/*Nota 10 / 10*/
#include <stdio.h>
#include <string.h>

int main(void) {

    char op[10];
    int seq[20];
    int  i, auxImais;
    int num, val, w;
    scanf("%d", &num);
    
    i = 0;
    
    while (num != -1) { /*Monta o vetro*/
        seq[i] = num;
        i++;
        scanf("%d", &num);
    }

    scanf("%s", op);
    
    while( strcmp(op, "fim")){ /* Retorna falso so quando sao inguais, e para o laço*/
        
        while( !(strcmp(op,"insira") ) ) { /*Negado pq a expresao retorna "falso"*/
            scanf("%d", &val);
            auxImais = i + 1; /*Auxiliar para a qunatidade inicial do vetor*/
            
            while(auxImais != 0) { /*Recendo novos valores*/ 
                auxImais--; /*Recebendo de tras pra frente*/
                seq[auxImais] = seq[auxImais-1];
                if (auxImais == 0) { 
                    seq[auxImais] = val; /*Recebendo valore de entrada*/
                }
            }
            scanf("%s", op);
            i += 1; /* "Aumentando" o tamanho do vetor*/
        }
       
        while ( !(strcmp(op,"remova") ) ) { /* Retorna falso so quando sao inguais, e para o laço*/
            scanf("%d", &val);
            while(val < i) { 
                seq[val] = seq[val+1]; /* Recebe o valor da frente a partir do valor do vetor de entrada*/
                val++;
            }
            i--; /* "Diminui" o vetor */
            scanf("%s", op);
        }
        
        while ( !(strcmp(op,"imprima") )) { /* Para imprimir na tela o resultado*/
            for (w = 0; w < i ; w++) {
                printf("%d ", seq[w]);
                
            }
            scanf("%s", op);
        }
    }

    printf("\n");

    return 0;
}
