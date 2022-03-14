/*Nota: 6,67 / 10*/
/* Autor: Gabriel Felipe Barbosa*/
#include <stdio.h>
int main(void) {

    int A[8], B[8], C[8], z, y, x;
    int num, i, j, k;
    int MEIO[8], FIM[8], t, w;
    int UNI[16], cont, b, c, soma;
    
    scanf("%d",&num);
    z = 0;/* | i para o for de A | < | z para armazenar valores no vetor C | */
    y = 0;/* | j para o for de B | < | y para armazenar valores no vetor B | */
    x = 0;/* | k para o for de C | < | x para armazenar valores no vetor C | */

    while (num != -2) {

        // printf("\n A: ");
        while (num != -1) { 
            A[z] = num;
            // printf("%d ", A[z]);
            z++;
            scanf("%d",&num); /* Para ler primeira parada = -1*/
        }
        
        scanf("%d",&num); /*Recebe valore para B*/

        // printf("\n B: ");
        while (num != -1) { /* Recebendo SEGUNDA ordem = B*/
            B[y] = num;
            // printf("%d ", B[y]);
            y++;
            scanf("%d",&num); /* Para ler primeira parada = -1*/
        }

        scanf("%d",&num); /*Recebe valore para C*/
        // printf("\n C: ");
        while (num != -1) {  /* Recebendo TERCEIRA ordem = C*/
            C[x] = num;
            // printf("%d ", C[x]);
            x++;
            scanf("%d",&num); /* Para ler primeira parada = -1*/
        }
        
        for(w = 0; w < 8; w++) { /* Se nao atribuir zero ele vai ler o lixo no Meio*/
            MEIO[w] = 0;
        }

        for(i = 0; i < z; i++) { /* i < z para A */
            for(j = 0; j < y; j++) { /* j < y para B */
                if(A[i] == B[j]) { /*Comoparando A com B*/
                    MEIO[i] = A[i]; /*Salvado em um novo vetor, se nao atribuice 0 antes leria o lixo aqui*/
                }
            }
        }
        
        for(w = 0; w < 8; w++) { /* Se nao atribuir zero ele vai ler o lixo no final*/
            FIM[w] = 0;
        } 
        for(j = 0; j < y; j++) { /* Para MEIO*/
            for(k = 0; k < x; k++) { /* k < x para C */
                if(MEIO[j] == C[k]){
                    FIM[j] = C[k]; /* Recebendo os valores*/
                }
            }
        }
        printf("\n");
        for(t = 0; t < 8; t++) { /* Se nao atribui zero antes ele poderia ter "lixo" > 0*/
            if(FIM[t] > 0){
                printf(" %d", FIM[t]);
            } 
        }

        cont = 0;
        b = 0;
        c = 0;
        soma = x+y+z;
        // printf("\nX %d | Y %d | Z %d", x, y, z);
        while ( cont < (soma)) { /* Montando um vetor com A B e C*/
            // printf("\n Cont: %d | Soma %d", cont, soma);
            if( z != 0 ) {
                UNI[cont] = A[cont];
                z--;
                // printf("\nA:%d ", A[cont]);
            }else{
                if(y != 0){
                    UNI[cont] = B[b];
                    // printf("\nB:%d ", B[b]);
                    b++;
                    y--;
                }else{
                    if(x != 0){
                        UNI[cont] = C[c];
                        // printf("\nC:%d ", C[c]);
                        c++;
                        x--;
                    }
                }
            }
            cont++;
        }
        printf("\n ");
        // for(t = 0; t < cont; t++){
        //     printf("%d ", UNI[t]);
        // }

        for(i = 0; i < soma; i++) { /* Eliminando os numeres iguais */
            for(j = i + 1; j < soma; j++){ /* Compara o primeiro valor com os outras a frente dele*/
                if(UNI[i] == UNI[j]){ /* Caso sejam iguais, recebe um valor que vai ser evitado para "eliminar" ele*/
                    UNI[j] = -1;
                }
            }
        }
    
        for(z = 0; z < soma; z++) { /* Recebe todos os valores "eliminando" as repetiçoes*/
            if(UNI[z] >= 0) {
                printf("%d ", UNI[z]);
            }
        }
        
        // printf("\n");
        scanf("%d",&num); /* Receber nova sequencia*/ 
        z = 0;/* zerando para novo ciclo */
        y = 0;/* j < y */
        x = 0;/* k < x */
        
    }
    printf("\n");
    return 0;
}
/*

1 2 3 4 5 -1 2 3 4 -1 1 2 5 -1 -2

1 2 3 4 5 -1 2 3 4 -1 1 2 5 -1 1 2 3 -1 2 3 4 -1 1 2 3 -1 -2

*/