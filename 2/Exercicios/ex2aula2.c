#include <stdio.h>

int main (void) {
    
    float a, b;
    scanf("%f %f", &a, &b);
    
    if( a > b) {
        printf("Valores: %f\n", b, a);    
    }
    if (a < b ){
        printf("Valores: %f\n", a, b);    
    }
    
    return 0;
}

warning: too many arguments for format [-Wformat-extra-args]
    9 |         printf("Valores: %f\n", b, a);

