#include <stdio.h>

int main (void){
    
    int angH, angM, hr, min;
    scanf("%d %d", &angH, &angM);
    
    hr = angH / 30;
    min = angM / 6;
    
    printf("%dh%dm", hr, min);
    
    return 0;
}
