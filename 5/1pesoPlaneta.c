/* Nota: 10 /10 */
#include <stdio.h>

int main(void){
    
    int planeta;
    float pesoT, pesoP;
    
    scanf("%f %d", &pesoT, &planeta);
    
    switch (planeta) {
        case 1:
        	pesoP = (pesoT / 10) * 0.37;
			printf ("Peso no planeta Mercúrio: %f",pesoP);
        break;
        
        case 2:
        	pesoP = (pesoT / 10) * 0.88;
			printf("Peso no planeta Vênus: %f", pesoP);
        break;
        
        case 3:
        	pesoP = (pesoT / 10) * 0.38;
			printf("Peso no planeta Marte: %f", pesoP);
        break;
        
        case 4:
        	pesoP = (pesoT / 10) * 2.64;
			printf("Peso no planeta Júpiter: %f", pesoP);
        break;
        
        case 5:
        	pesoP = (pesoT / 10) * 1.15;
			printf("Peso no planeta Saturno: %f", pesoP);
        break;
        
        case 6:
        	pesoP = (pesoT / 10) * 1.17;
			printf("Peso no planeta Urano: %f", pesoP);
        break;
    }

   return 0;
}
