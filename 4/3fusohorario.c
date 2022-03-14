/* Nota 9 de 10*/
#include <stdio.h>

int main(void){
    int hs, tv, fh, hlocal, hchegada;
    scanf("%d %d %d", &hs, &tv, &fh);
    
    hlocal = hs + fh;
    hchegada = hlocal + tv;
    
    if(hs >= 0 && hs <=23 && tv >= 1 && tv <=12 && fh >= -5 && fh <= 5){
        if (hchegada == 24){
            hchegada = 0;
            printf("%d", hchegada);
        }else{
            if (hlocal >= 24){
                hchegada = (hlocal%24) + tv;
                printf("%d", hchegada);
            }else{
                if (hs < fh && hlocal < 0){
                    hlocal = hs + (fh*(-1));
                    hchegada = hlocal + tv; 
                    printf("%d", hchegada);
                }else{
                     printf("%d", hchegada);
                }
            }
        }
    }    
    
    return 0;
}

