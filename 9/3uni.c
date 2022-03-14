/* Nota: 10 / 10 */
#include <stdio.h>
int main(void) {

    int UNI[24], z; /*Vetor = 24 pq são 3 de 8 = 8 * 3 = 24, e fiz tudo em um vetor*/
    int num, i, j;
    int  ciclo;
    
    scanf("%d",&num);
    ciclo = 0; /* Salva os numeros em cada posição do vetor*/
    
        while (num != -2) {
    
            while (num != -1) { /* Recebendo PRIMEIRA ordem = A*/
                UNI[ciclo] = num;
                ciclo++;
                scanf("%d",&num); /* Para ler primeira parada = -1*/
            }
            
            scanf("%d",&num);
            while (num != -1) { /* Recebendo SEGUNDA ordem = B*/
                UNI[ciclo] = num;
                ciclo++;
                scanf("%d",&num); /* Para ler segunda parada = -1*/
            }
    
            scanf("%d",&num);
            while (num != -1) {  /* Recebendo TERCEIRA ordem = C*/
                UNI[ciclo] = num;
                ciclo++;
                scanf("%d",&num); /* Para ler terceira parada = -1*/
            }
    
    
            for(i = 0; i < ciclo; i++) { /* Eliminando os numeres iguais */
                for(j = i + 1; j < ciclo; j++){ /* Compara o primeiro valor com os outras a frente dele*/
                    if(UNI[i] == UNI[j]){ /* Caso sejam iguais, recebe um valor que vai ser evitado para "eliminar" ele*/
                        UNI[j] = -1;
                    }
                }
            }
    
            for(z = 0; z < ciclo; z++) { /* Recebe todos os valores "eliminando" as repetiçoes*/
                if(UNI[z] >= 0) {
                    printf("%d ", UNI[z]);
                }
            }
            ciclo = 0; /*Zerar para proxima sequencia*/
            printf("\n");
            scanf("%d",&num);
        }
    return 0;
} 