/* Nota: 10 / 10 */
#include <stdio.h>

int main(void){
    
    int dia, mes, ano, diaBi, diaCaso;
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    if ((ano%4 == 0 & ano%100 > 0) || (ano%400 == 0) )  {
        diaBi = 29;    
    }
    
    if ( ! ((ano%4 == 0 & ano%100 > 0) || (ano%400 == 0)) )  {
        diaBi = 28;    
    }
    
    switch (mes) {
        case 1:
            diaCaso = dia;
        break;
        case 2:
            diaCaso = 31 + dia;
        break;
        
        case 3:
            diaCaso = 31 + diaBi + dia;
        break;
        
        case 4:
           diaCaso = 62 + diaBi + dia;
        break;
        
        case 5:
            diaCaso = 92 + diaBi + dia;
        break;
        
        case 6:
           diaCaso = 123 + diaBi + dia;
        break;
        
        case 7:
           diaCaso = 153 + diaBi + dia;
        break;
        
        case 8:
           diaCaso = 184 + diaBi + dia;
        break;
        
        case 9:
           diaCaso = 215 + diaBi + dia;
        break;
        
        case 10:
           diaCaso = 245 + diaBi + dia;
        break;
        
        case 11:
           diaCaso = 276 + diaBi + dia;
        break;
        
        case 12:
           diaCaso = 306 + diaBi + dia;
        break;
    }
    
    printf("%d", diaCaso);
    
    return 0;
}
