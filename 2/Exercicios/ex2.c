#include <stdio.h>

int main (void) {
    
    int a, b;
    scanf("%i %i", &a, &b);
    
    if( a > b ) {
        printf("Os valors em ordem crescente são: %i %i\n", b, a);    
    }

    if (a < b){
        printf("Os valors em ordem crescente são: %i %i\n", a, b);    
    }
    
    return 0;
}



