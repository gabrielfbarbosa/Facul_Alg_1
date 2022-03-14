/*Nota: 8,5 de 10*/
#include <stdio.h>

int main(void)
{
    int a, b, aux; 
    scanf("%d %d", &a, &b);
    
    if(a==0 || b ==0 ){
        printf("%d e %d nao sao multiplos entre si", a, b);
    }else{
        if(a >= b && a%b == 0){
            printf("%d e %d sao multiplos entre si", a, b);
        }else{
            if(b > a && b%a == 0){
                printf("%d e %d sao multiplos entre si", a, b);
            }else{
                printf("%d e %d nao sao multiplos entre si", a, b);    
            }
        }
    }
    
    return 0;
}
