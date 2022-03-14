/* Autor Gabriel Felipe Barbosa */
#include <stdio.h>

int main(void) {

    int A[15][15], i, j, n;
    int aux, cont, maior1, maior2, soma1, somaF1, soma2, somaF2, somaF;

    scanf("%d", &n);
    if(n >= 4 && n <= 16 && n%2 == 0) {
        for (i = 0; i < n; i++){
            for(j = 0; j < n; j++) {
                scanf("%d", &A[i][j]);
            }
        }

        for ( i = 0; i < (n/2)-1; i++) {
            for(j = i+1; j < n-2-i; j++){
                printf("\nComparando A[%d][%d] %d > A[%d][%d] %d", i, j, A[i][j], i, j+1, A[i][j+1] );
                if(A[i][j] > A[i][j+1]){
                    A[i][j+1] = A[i][j];

                }else {
                    maior1 = A[i][j+1];
                }
            }
        }
        // printf("\nMaior %d", maior1);
        cont = 0;
        for ( i = (n/2)+1; i < n; i++) {
            for(j = (n/2)-1-cont; j < n/2+cont; j++){
                printf("\nComparando A[%d][%d] %d > A[%d][%d] %d", i, j, A[i][j], i, j+1, A[i][j+1] );
                if(A[i][j] > A[i][j+1]){
                    A[i][j+1] = A[i][j];
                    maior2 = A[i][j];
                }else {
                    maior2 = A[i][j+1];
                }
            }
            cont++;
        }
        // printf("\nMaior %d", maior2);
        if(maior1 > maior2){
            printf("\n**MAIOR: %d", maior1);
        }else{
            printf("\n**MAIOR: %d", maior2);
        }

        printf("\n");
        somaF1 = 0;
        for(j = 0; j < (n/2); j++){
            for(i = j; i < n-j-1; i++){
                aux = A[i][j] + A[i+1][j];
                printf("\nSomando A[%d][%d] %d + A[%d][%d] %d", i, j, A[i][j], i+1, j, A[i+1][j] );
                A[i+1][j] = aux;
                soma1 = A[i+1][j];
            }
            printf("\nSoma 1: %d", soma1);
            somaF1 = somaF1 + soma1;
            printf("\nSoma F1: %d", somaF1);
        }

        printf("\n");

        somaF2 = 0;
        cont = 0;
        for(j = (n/2); j < n; j++){
            for(i = (n/2)-1-cont; i < (n/2)+cont; i++){
                aux = A[i][j] + A[i+1][j];
                printf("\nSomando A[%d][%d] %d + A[%d][%d] %d", i, j, A[i][j], i+1, j, A[i+1][j] );
                A[i+1][j] = aux;
                soma2 = A[i+1][j];
            }
            cont++;
            printf("\nSoma 2: %d", soma2);
            somaF2 = somaF2 + soma2;
            printf("\nSoma F2: %d", somaF2);
        }
        somaF = somaF1 + somaF2;
        printf("\n **Final: %d", somaF);
    }
    printf("\n");
/*

  j	0	1	2	3	4	5
i  
0-	1	2	3	4	5	6
1-	6	5	4	3	2	1
2-	1	2	3	4	5	6
3-	6	5	4	3	2	1
4-	1	2   3	4	5	6
5-	6	5	4	3	2	1
 
6
1 2 3 4 5 6
6 5 4 3 2 1
1 2 3 4 5 6
6 5 4 3 2 1
1 2 3 4 5 6
6 5 4 3 2 1
    
4
1 2 3 4
5 6 7 8
9 8 7 6
5 4 3 2

*/


 
    return 0;
}