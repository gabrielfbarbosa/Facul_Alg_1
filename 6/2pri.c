/* Nota: 10/10*/
#include <stdio.h>

int main(void) {
    
    int n, s, somarMOD, i, j, primAnt, h, primAntMOD, maior, b; 
    scanf("%d", &n); /* recebe a quantidade de valores que S vai receber*/
    
    somarMOD = 0; /* Somar para saber os primeiros primos */
    primAntMOD = 0; /* Soma para saber o primo anterior*/

    for(i = 1; i <= n; i++) {
        scanf("%d", &s); /* Recebendo os valores para S */

        for(j = 1; j <= s; j++) { /* Dividi por todos numeros */
            if(s % j == 0) { /* MOD para saber qual é primo */
                somarMOD++; /* Somando a quantidade de MOD */
            }
        }
        if (somarMOD == 2) { /* Selecionando apenas os primos */
            printf("%d é primo.\n", s);
            somarMOD = 0; /* Pra zerar contagem do MOD */
        }else {

            for(primAnt = 1; primAnt <= s; primAnt++) { /* todos valores de primo anterior*/
                for (h = 1; h <= primAnt; h++) { /* Dividindo por todos */
                    b = primAnt - 1; /* Para auxiliar a selecionar o maior primo anterios*/
                    if(primAnt % h == 0) { /* MOD para saber qual é primo*/
                        primAntMOD++;
                    }
                }
                if (primAntMOD == 2) { /*Selecionando os primos*/ 
                    maior = b; /*Selecionar o maior primo anterios*/
                    if (maior < primAnt){
                        maior = primAnt; 
                    }
                    primAntMOD = 0; /* Pra zerar contagem do MOD */
                }else{
                    primAntMOD = 0; /* Pra zerar contagem do MOD */
                }
            }
            printf("%d não é primo, o primo anterior é %d\n",s, maior);
            somarMOD = 0; /* Pra zerar contagem do MOD */
        }
   }

    return 0;
}

