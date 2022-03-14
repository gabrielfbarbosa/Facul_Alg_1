#include<stdio.h>

/*Autor: Gabriel Felipe Barbosa 10/10*/
int main(void){
    
    int a,b,c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>=b && a>=c && b>=c){
        printf("1: %d %d %d", a,b,c);
    }else{
        if(a>=c && c>=b){
            printf("2: %d %d %d", a,c,b);
        }else {
            if(b>= c && c>= a){
                printf("3: %d %d %d",b,c,a);
            }else{
                if(b>=a && a>= c){
                    printf("4: %d %d %d", b,a,c);
                }else{
                    if(c>=a && a>=b){
                        printf("5: %d %d %d", c,a,b);
                    }else{
                        if(c>=b && b>=a){
                            printf("6: %d %d %d", c,b,a);
                        }
                    }
                }
            }
        }
    }

    return 0;

}
