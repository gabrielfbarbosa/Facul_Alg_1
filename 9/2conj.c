/* Nota: 10 / 10*/
#include <stdio.h>
int main(void) {

    int A[8], B[8], C[8], z, y, x;
    int num, i, j, k;
    int MEIO[8], FIM[8], t, w;
    
    scanf("%d",&num);
    z = 0;/* i < z */
    y = 0;/* j < y */
    x = 0;/* k < x */
    

    while (num != -2) {

        while (num != -1) { /* Recebendo PRIMEIRA ordem = A*/
            A[z] = num;
            z++;
            scanf("%d",&num); /* Para ler primeira parada = -1*/
        }
        
        scanf("%d",&num);

        while (num != -1) { /* Recebendo SEGUNDA ordem = B*/
            B[y] = num;
            y++;
            scanf("%d",&num); /* Para ler primeira parada = -1*/
        }

        scanf("%d",&num);

        while (num != -1) {  /* Recebendo TERCEIRA ordem = C*/
            C[x] = num;
            x++;
            scanf("%d",&num); /* Para ler primeira parada = -1*/
        }
        
        for(w = 0; w < 8; w++) { /* Se nao atribuir zero ele vai ler o lixo no final*/
            MEIO[w] = 0;
        }

        for(i = 0; i < z; i++) { /* i < z para A */
            for(j = 0; j < y; j++) { /* j < y para B */
                printf("\n| A %d = %d B |", A[i], B[j]);
                if(A[i] == B[j]) { /*Comoparando A com B*/
                    MEIO[i] = A[i]; /*Salvado em um novo vetor*/
                    printf(" MEIO = %d", MEIO[i]);                    
                }
            }
        }
        
        for(w = 0; w < 8; w++) { /* Se nao atribuir zero ele vai ler o lixo no final*/
            FIM[w] = 0;
        } 
        printf("\n");
        for(j = 0; j < y; j++) { /* Para MEIO*/
            for(k = 0; k < x; k++) { /* k < x para C */
                printf("\n| MEIO %d = %d Ck |", MEIO[j], C[k]);
                if(MEIO[j] == C[k]){
                    FIM[j] = C[k];
                    printf(" FIM %d", FIM[j]);

                }
            }
        }
        printf("\n");
        for(t = 0; t < 8; t++) { /* Se nao atribui zero antes ele poderia ter "lixo" > 0*/
            if(FIM[t] > 0){
                printf(" %d", FIM[t]);
            } 
        }

        printf("\n");
        scanf("%d",&num);
    z = 0;/* i < z */
    y = 0;/* j < y */
    x = 0;/* k < x */
    }
    return 0;
}

/*

4 3 2 5 -1 4 1 5 3 -1 1 2 3 4 5 6 -1 -2

4 3 2 5 -1 4 1 5 3 -1 1 2 3 4 5 6 -1 -2

1 2 3 4 5 -1 2 3 4 -1 1 2 5 -1 1 2 3 -1 2 3 4 -1 1 2 3 -1 4 3 2 5 -1 4 1 5 3 -1 1 2 3 4 5 6 -1 -2

*/