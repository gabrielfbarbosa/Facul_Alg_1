#include <stdio.h>

int main(void){
    
    int dia, mes, ano, diaBi;
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    if ((ano%4 == 0 & ano%100 > 0) || (ano%400 == 0) )  {
        diaBi = 29;    
    }
    
    if ( ! ((ano%4 == 0 & ano%100 > 0) || (ano%400 == 0)) )  {
        diaBi = 28;    
    }
    
    if(mes == 2) {
        dia = 31 + dia;
    }
    
    if (mes == 3) {
        dia = 31 + diaBi + dia; 
    }
    
    if (mes == 4 ) {
        dia = 31 + diaBi + 31 + dia; 
    }
    
    if (mes == 5) {
        dia = 31 + diaBi + 31 + 30 + dia;
    }
    
    if (mes == 6 ) {
        dia = 31 + diaBi + 31 + 30 + 31 + dia; 
    }
    
    if (mes == 7) {
        dia = 31 + diaBi + 31 + 30 + 31 + 30 + dia;  
    }
    
    if (mes == 8) {
        dia = 31 + diaBi + 31 + 30 + 31 + 30 + 31 + dia; 
    }
    
    if (mes == 9 ) {
        dia = 31 + diaBi + 31 + 30 + 31 + 30 + 31 + 31 + dia; 
    }
    
    if (mes == 10 ) {
        dia = 31 + diaBi + 31 + 30 + 31 + 30 + 31 + 31 + 30 + dia; 
    }
    
    if (mes == 11 ) {
        dia = 31 + diaBi + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + dia; 
    }
    
    if (mes == 12 ) {
        dia = 31 + diaBi + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + dia; 
    }
    
    printf("%d", dia);
    
    return 0;
}
