/* Nota 10 / 10*/
#include <stdio.h>

int main(void){
    
    int hrI, minI, segI, segundosI;
    int hrF, minF, segF, segundosF;
    int hr, min, seg, tempoJogado;
    int maiorTempo, maiorHr, maiorMin, maiorSeg, aux;
    
    scanf("%dh%dm%ds", &hrI, &minI, &segI);
    scanf("%dh%dm%ds", &hrF, &minF, &segF);

    maiorTempo = 0;

   while (hrI != -1 && minI != -1 && segI != -1) {
       
        segundosI = (hrI*3600) + (minI*60) + segI;
        segundosF = (hrF*3600) + (minF*60) + segF;
        
        tempoJogado = segundosF  - segundosI;
        
        if( tempoJogado < 0 ){
            tempoJogado += 86400; 
        }
        
        hr = tempoJogado / 3600;
        min = (tempoJogado % 3600) / 60;
        seg = (tempoJogado % 3600) % 60;
        
        if ( tempoJogado == 0 ) {
            hr = 24;
            min = 0;
            seg = 0;
        }
        
        aux = (hr*3600) + (min*60) + seg;
        
        if (maiorTempo < aux) {
            maiorTempo = aux;
        }

        /*Entrada do novo par de horas*/
        scanf("%dh%dm%ds", &hrI, &minI, &segI);
        
        if(hrI == -1 && minI == -1 && segI == -1) {
            hrF = 0;
            minF = 0;
            segF = 0;
        }else {
            scanf("%dh%dm%ds", &hrF, &minF, &segF);
        }
        printf("%dh%dm%ds\n", hr, min, seg );
    } 

    maiorHr = maiorTempo / 3600;
    maiorMin = (maiorTempo % 3600) / 60;
    maiorSeg = (maiorTempo % 3600) % 60;
    
    printf("%dh%dm%ds\n", maiorHr, maiorMin, maiorSeg );

    return 0;
}
