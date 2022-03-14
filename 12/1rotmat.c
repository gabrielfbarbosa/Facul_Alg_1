/* Nota: 9,23 / 10 */
/* Autor Gabriel Felipe Barbosa */
#include <stdio.h>

int main(void) {

    int A[15][15], i, j, n, faz;
    int aux, aux2, aux3, k, cont;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    scanf("%d", &faz);

    k = n/2;
    if(n % 2 != 0){
        k = (n/2) + 1;
    }
    
        
    /* linha 0 vai para coluna n-1 */
    cont = 0;
    while (faz != 0) {
        
        while(k != 0) {
            for (j = cont; j < n-1-cont; j++) {
                
                aux = A[j][n-1-cont]; /* Guarda valores da coluna n-1*/

                A[j][n-1-cont] = A[cont][j]; /*Troca Linha 0 com coluna n-1*/
                
                aux2 = A[n-1-cont][n-1-j] ; /*Guarda valores da Ultima linha */

                A[n-1-cont][n-1-j] = aux; /* Ultima Linha recebe valores da Ultima coluna */
            
                aux3 = A[n-1-j][cont]; /* Guarda valores da Primeira coluna */
                
                A[n-1-j][cont] = aux2; /* coluna 0 recebe valores da linha n-1*/

                A[cont][j] = aux3;
                
            }
            cont++;
            k--;
        }
        cont = 0;
        k = n/2;
        if(n % 2 != 0){
            k = (n/2) + 1;
        }
        faz--;
    }
    
/*

  j 0	1	2	3
i
0	1	2	3	4
1	8	3	4	3
2	7	7	6	5
3	5	6	5	9

4
1 1 2 4
8 3 4 3
7 7 6 4
4 6 5 1

5
1 1 2 4 5
8 6 7 3 4
7 7 6 4 3
4 6 5 1 2
9 8 7 6 5 


*/
    
    printf("\n\nDepois \n");
    for (i = 0; i < n; i++){
        for(j = 0; j < n; j++) {
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}

