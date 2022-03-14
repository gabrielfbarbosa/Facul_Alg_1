#include <stdio.h>

int main(void){
    
    int diaI, hrI, minI, segI;
    int diaF, hrF, minF, segF;
    int dia, hr, min, seg, segundosI, segundosF, segRes;
    
    scanf("%d\n%dh%dm%ds\n", &diaI, &hrI, &minI, &segI);
    scanf("%d\n%dh%dm%ds", &diaF, &hrF, &minF, &segF);
    
    dia = diaF - diaI;

    segundosI = (hrI*3600) + (minI*60) + segI;
    segundosF = (dia*86400) + (hrF*3600) + (minF*60) + segF;
    
    segRes = segundosF - segundosI;
    
    if (segundosI > segundosF){
        segRes = (segundosF + 86400) - segundosI;
    }
    
    seg = segRes%60;
    
    min = ((segRes - seg)/60)%60;
    
    hr = (segRes%86400)/3600;
    
    dia = segRes/86400;
    
    if (segRes == 0){
        hr = 24;
    }
    
    printf("%d d %d h %d m %d s", dia, hr, min, seg);
    
    return 0;
}
