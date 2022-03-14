/*Autor: Gabriel Felipe BArbosa*/
#include <stdio.h>

int main(void){
    
    int segundos, hr, min, seg, ;
    
    scanf("%i", &segundos);

    seg = segundos%60;
    
    min = ((segundos - seg)/60)%60;

    hr = segundos/3600;


        
    printf("\n%i hora", hr);

    printf("\n%i minutos", min);

    printf("\n%i segundos\n",seg);
    
    return 0;
    
}



