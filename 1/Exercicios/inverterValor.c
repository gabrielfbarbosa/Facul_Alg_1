#include <stdio.h>

int main(){

    int n, n1, n2, n3;

    printf("informe um numero\n");

    scanf("%d",&n); 

    n1=n%10; 
    n=n/10; 
    n2=n%10;
    n3=n/10; 
    n = n1*100+n2*10+n3;
    printf("%d", n);

return 0;
}
