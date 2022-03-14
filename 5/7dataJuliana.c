/* Nota: 10 / 10 */
#include <stdio.h>

int main(void){
    
    int diaA, mesA, anoA, diaB, mesB, anoB, julA, julB, diaSemA, diaSemB;
    scanf("%d/%d/%d %d/%d/%d", &diaA, &mesA, &anoA, &diaB, &mesB, &anoB);
    
    julA = (1461*(anoA+4800+(mesA-14)/12))/4 + (367*(mesA-2-12*((mesA-14)/12)))/12 - (3*((anoA+4900+(mesA-14)/12)/100))/4 + diaA - 32075;
    
    julB = (1461*(anoB+4800+(mesB-14)/12))/4 + (367*(mesB-2-12*((mesB-14)/12)))/12 - (3*((anoB+4900+(mesB-14)/12)/100))/4 + diaB - 32075;
    
    diaSemA= julA % 7;
    
    diaSemB = julB % 7;
    
    if(diaSemA == diaSemB){
        switch (diaSemA){
            case 0:
                printf("Os dias da semana são iguais. segunda-feira");
            break;
            
            case 1:
                printf("Os dias da semana são iguais. terça-feira");
            break;
            
            case 2:
                printf("Os dias da semana são iguais. quarta-feira");
            break;
            
            case 3:
                printf("Os dias da semana são iguais. quinta-feira");
            break;
            
            case 4:
                printf("Os dias da semana são iguais. sexta-feira");
            break;
            
            case 5:
                printf("Os dias da semana são iguais. sábado");
            break;
            
            case 6:
                printf("Os dias da semana são iguais. domingo");
            break;
        }
    }else{
        printf("Os dias da semana são diferentes.");
    }
    
    return 0;
}
