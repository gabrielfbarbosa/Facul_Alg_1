#include <stdio.h>

int main (void) {
    
    float a, b;
    scanf("%f %f", &a, &b);
    
    if( a + b > 10) {
        printf("A soma dos valores é = %.2f\n", a + b);    
    }
    if (a + b < 10){
        printf("Seu valor não é maior que 10.\n");    
    }
    
    return 0;
}
