/*Nota: 10 / 10*/
#include <stdio.h>

int main(void) {

    int n, num, divi, primo, parente, i, seqPri, maiorSeq;
    scanf("%d", &n);
    
    divi = 0; 
    primo = 0;
    seqPri = 0;
    maiorSeq = 0;
    for (i = n; i > 0; i--) {
        scanf("%d", &num);
         while(divi < num){
            divi++; 
            parente = num % divi;

            if(parente == 0) {
                primo++;
            }
        }
        if (primo == 2) {
            seqPri++;
        }else {
            seqPri = seqPri - seqPri;
        }
        if(maiorSeq < seqPri) {
            maiorSeq = seqPri;
        }
        printf("num: %d | Primo: %d | SeqPri %d\n", num, primo, seqPri);

        divi = 0; 
        primo = 0;
    }
    printf("\nMaior Sequencia igual: %d\n\n", maiorSeq);
    return 0;
}

