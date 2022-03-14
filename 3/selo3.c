/*Autor: Gabriel Felipe Barbosa 10/10*/
#include<stdio.h>

int main(void){

    int taxa, selo5, selo3;
    scanf("%d", &taxa);

    if (taxa >= 8 && (taxa%5 == 0 || taxa%5 == 3)){
        selo5 = taxa / 5;
        selo3 = (taxa % 5) / 3;
        printf("%d %d", selo3, selo5); 
    }    

    if (taxa >= 8 && taxa%5 == 1){
        selo3 = (taxa % 5) * 2;
        selo5 = (taxa / 5) - 1;
        printf("%d %d", selo3, selo5);
    }


    if (taxa >= 8 && taxa%5 == 2){
        selo3 = (taxa % 5) * 2 ;
        selo5 = (taxa / 5) - (taxa % 5);
        printf("%d %d", selo3, selo5);        
    }

    if (taxa >= 8 && taxa % 5 == 4 ){
        selo5 = (taxa / 5) - 1;
        selo3 = ((taxa % 5 ) / 3) * 3;
        printf("%d %d", selo3, selo5);
    }
    
    return 0;
}
