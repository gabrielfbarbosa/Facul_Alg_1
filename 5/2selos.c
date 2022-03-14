#include <stdio.h>

int main (void) {
    
    int taxa, selo5, selo3, MODtaxa;
    scanf("%d", &taxa);
    
    MODtaxa = taxa % 5;
    
    if(taxa >= 8){
        
        switch (MODtaxa) {
            case 0:
                selo5 = taxa / 5;
                selo3 = (taxa % 5) / 3;
                printf("%d %d", selo3, selo5);
            break;
            
            case 3:
                selo5 = taxa / 5;
                selo3 = (taxa % 5) / 3;
                printf("%d %d", selo3, selo5);
            break;
            
            case 1:
                selo3 = (taxa % 5) * 2;
                selo5 = (taxa / 5) - 1;
                printf("%d %d", selo3, selo5);
            break;
            
            case 2:
                selo3 = (taxa % 5) * 2 ;
                selo5 = (taxa / 5) - (taxa % 5);
                printf("%d %d", selo3, selo5); 
            break;
            
            case 4:
                selo5 = (taxa / 5) - 1;
                selo3 = ((taxa % 5 ) / 3) * 3;
                printf("%d %d", selo3, selo5);
            break;
        }
        
    }
    
    return 0;
}
