/*Nota: 8,5 de 10*/
#include <stdio.h>

int main(void){
    int linha, coluna;
    scanf("%d %d", &linha, &coluna);
    
    if (linha%2 != 0 && coluna%2 != 0){
        printf("branca");
    }else{
        if (linha%2 == 0 && coluna%2 == 0){
            printf("branca");
        }else{
            printf("preta");
        }
    }
    
    return 0;
}
