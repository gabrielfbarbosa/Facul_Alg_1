#include <stdio.h>

int main (void) {
    
    float a, b, c, d, maior;
    scanf("%f %f %f %f", &a, &b, &c, &d);

    menor = a;
    
    if( b > maior ) {
        maior = b;
    }
    
    if( c > maior ) {
        maior = c;
    }

    if( d > maior ) {
        maior = d;
    }

    res = a + b + c + d - maior;

    printf ("O menor valor entre eles é = %.2f\n", res);
    
    
    return 0;
}



