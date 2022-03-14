#include <stdio.h>
#include <string.h>

int main(void) {

    char op[7];
    int A[15][15], auxL, auxC, cont;
    int n, m, i, j, val;

    scanf("%d %d", &m, &n); /* m linhas e n colunas */
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    // printf("\nMatriz:\n");
    // for(i =0; i < m; i++) {
    //     for(j = 0; j < n; j++) {
    //         printf("%d ", A[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    scanf("%s", op); 
    
    while( strcmp(op, "fim") != 0) {
        
        /*Verificar pq para 4 colunas nao inverte a lnihas certo*/
        while( strcmp(op, "inv_l") == 0 ) {
            scanf("%d", &val);
            cont = 1;
            for(j = 0; j < n; j++) {
                if(j < n/2){
                    auxL = A[val][j];
                    A[val][j] = A[val][n-cont]; /*No Lugar do zero recebe val*/
                    A[val][n-cont] = auxL;
                    cont++;
                }
            }
            scanf("%s", op);
        }

        /*para trocar a ordem da COLUNA = n linha*/
        while ( strcmp(op, "inv_c") == 0) {
            scanf("%d", &val);
            cont = 1;
            for(i = 0; i < m; i++) {
                if(i < m/2){
                    auxC = A[i][val];
                    A[i][val] = A[m-cont][val];
                    A[m-cont][val] = auxC;
                    cont++;
                }
            }
            scanf("%s", op);
        }
        /* para trocar a ordem da Linha: n SE linha tem numero*/
        while ( strcmp(op, "invl_se") == 0) {
            scanf("%d", &val);
            cont = 1;
            for(i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    if(A[i][j] == val ) {
                        for(j = 0; j < n-1; j++) {
                            if(j < n/2){
                                auxL = A[val][j];
                                A[val][j] = A[val][n-cont]; /*No Lugar do zero recebe val*/
                                A[val][n-cont] = auxL;
                                cont++;
                            }
                        }
                    }
                }
            }
            scanf("%s", op);
        }
        /* para trocar a ordem da Linha: n SE linha tem numero*/
        while ( strcmp(op, "invc_se") == 0) {
            scanf("%d", &val);
            cont = 1;
            for(i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    if(val == A[i][j]) {
                        for(i = 0; i < m; i++) {
                            if(i < m/2){
                                auxC = A[i][val];
                                A[i][val] = A[m-cont][val];
                                A[m-cont][val] = auxC;
                                cont++;
                            }
                        }
                    }
                }
            }
            scanf("%s", op);
        }

        while ( strcmp(op, "imprime") == 0) {
            printf("\n**Final Matriz\n");
            for(i = 0; i < m; i++) {
                for(j = 0; j < n; j++) {
                    printf("%d ", A[i][j]);
                }
                printf("\n");
            }
            scanf("%s", op);
        }
    }    
    
    return 0;
}

/*

2 3 1 2 3 4 5 6 inv_l 0 imprime inv_c 2 imprime invl_se 6 imprime invc_se 5 imprime fim


*/