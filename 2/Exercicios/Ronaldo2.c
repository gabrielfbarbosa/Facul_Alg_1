#include <stdio.h>

int main (void) {
    
    float a, b, c;

    printf("Digite as medidas do trinagulo: ");

    scanf("%f %f %f", &a, &b, &c);
    
    if ((a > 0) && (b > 0) && (c > 0) && (a <= b+c) && (b <= a+c) && (c <= a+b)) {
        if (a == b && b == c) {
            printf("Equilatero\n");        
        }
        if (((a == b) && (b != c)) || ((a != b) && (b == c)) || ((a == c) && (c != b))) {
            printf("ISOSCELES\n");        
        }
        if ( (a != b ) && (a != c) && (b != c) ) {
            printf("ESCALENO\n");
        }
    }
    
    if(!((a > 0) && (b > 0) && (c > 0) && (a <= b+c) && (b <= a+c) && (c <= a+b))) {
        printf("Não forma um triangulo\n");
    }
    
    return 0;
}



