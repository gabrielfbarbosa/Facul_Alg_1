/*Autor: Gabriel Felipe BArbosa*/
#include <stdio.h>

int main(void){
    
    int hr, min, seg, segundos;
    char h, m ,s;
    
    scanf("%i %c %i %c %i %c", &hr, &h, &min, &m, &seg, &s);
    
    segundos = (hr*3600) + (min*60) + seg;
    
    printf("%is", segundos);
    
    return 0;
    
}



