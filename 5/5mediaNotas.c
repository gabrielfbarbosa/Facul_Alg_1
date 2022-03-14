/* Nota: 10 / 10 */
#include <stdio.h>

int main(void) {
    
    float nota1, nota2, nota3, nota4, notaE, media, mediaE;
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    
    media = ( (nota1*2) + (nota2*3)+ (nota3*4)+ (nota4*1) ) / (2 + 3 + 4 + 1);
    
    if( media >= 7){
        printf("Média: %f O aluno foi aprovado. ", media);
    }
    
    if( media < 5){
        printf("Média: %f O aluno foi reprovado. ", media);
    }
    
    if( media >= 5 && media < 7){
       
        scanf("%f", &notaE);
        
        mediaE = (media + notaE) / 2;
        
        printf("Média: %f O aluno deve fazer o exame.", media);
        
        if(mediaE >= 5){
            printf("O aluno foi aprovado com média final %f", mediaE);
        }else{
            printf("O aluno foi reprovado com média final %f", mediaE);
        }
    }
    
    
    return 0;
}
