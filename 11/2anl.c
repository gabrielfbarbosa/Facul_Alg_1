#include <stdio.h>
#include <string.h>

int main(void) {

    char op[7];
    int A[15][15], nao, repete;
    int n, i, j, li, co, val ;

    scanf("%d", &n); 
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    // printf("\nMatriz:\n");
    // for(i =0; i < n; i++) {
    //     for(j = 0; j < n; j++) {
    //         printf("%d ", A[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    scanf("%s", op);

    while (strcmp(op, "fim") != 0) {

        while ( strcmp(op, "at_v") == 0) {
            scanf("%d %d %d", &li, &co, &val);
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    if (i == li && j == co) {
                        A[i][j] = val;
                    }
                }
            }
            scanf("%s", op);
        }

        while ( strcmp(op, "v_sim") == 0) {
            nao = 0;
            for(i = 1; i < n; i++){
                for (j = i-1; j < n; j++) {
                    if(A[i][j] != A[j][i]){
                        nao++;
                    }
                }
            }
            if(nao > 0) {
                printf("não\n");                
            }else{
                printf("sim\n");
            }
            // printf("\n");

            scanf("%s", op);
        }

        while ( strcmp(op, "v_lat") == 0) {
            repete = 0;
            for(i = 0; i < n; i++){ /*Procura se repete na LINHA*/
                for (j = 0; j < n; j++) {
                    if(A[i][j] == A[i][j+1] && (j+1) < n){
                        // printf("\n Linha %d:  A[%d][%d]: %d | A[%d][%d]: %d | IGUAL |", i, i, j, A[i][j], i, (j+1), A[i][j+1]);
                        repete++;
                    }
                }
            }

            for(j = 0; j < n; j++){ /*Procura se repete na COLUNA*/
                for (i = 0; i < n; i++) {
                    if(A[i][j] == A[i+1][j] && (i+1) < n){
                    //    printf("\n COLUNA %d: A[%d][%d]: %d | A[%d][%d] %d | IGUAL |", j, i, j, A[i][j], i+1, j, A[i+1][j]);
                       repete++;
                    }
                }
            }

            if(repete > 0) {
                printf("não\n");
            }else {
                printf("sim\n");
            }
            // printf("\n");

            scanf("%s", op);
        }

        while ( strcmp(op, "imprime") == 0) {
            for(i = 0; i < n; i++) {
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