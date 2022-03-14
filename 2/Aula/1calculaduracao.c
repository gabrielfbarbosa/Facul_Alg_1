#include <stdio.h>

int main (void){

    int hrI, minI, segI, hrF, minF, segF, hr, min, seg, segRes, segundosF,segundosI ;

    scanf("%d %d %d %d %d %d", &hrI, &minI, &segI, &hrF, &minF, &segF);

    segundosI = (hrI*3600) + (minI*60) + segI;

    segundosF = (hrF*3600) + (minF*60) + segF;
      
    segRes = segundosF - segundosI;

    if(segundosI > segundosF) {
        segRes = (segundosF + 86400 ) - segundosI;    
    } 

    seg = segRes%60;
    
    min = ((segRes - seg)/60)%60;

    hr = (segRes/3600) ;

    if ((segRes == 0)) {
        hr = 24 - hr;
    }


    printf("%i %i %i Inicial: %i Final: %i\n", hr, min, seg, segundosI, segundosF );

    return 0;
}

