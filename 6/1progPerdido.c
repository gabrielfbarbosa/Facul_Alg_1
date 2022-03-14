/* Nota 10/10 */
#include <stdio.h>

int main(void) {
    
    int n, k, i, cont, aux, a, mod, b, modAux;
    scanf("%d %d", &n, &k);
    
    cont = 0; /* Para somar os valores */
    aux = 0; /* Saber se tem valor repetido */
    modAux = 0; /* Somar quantas vezes um mesmo valor aparece */
    
    for(i = 1; i <= n; i++) { /* Separa para soma cada unidade de valor */
        
        mod = k % 10; /* Separa as unidade */
        
        k = k / 10; /* remover a unidade somada para a proxima repetição */
        
        cont = cont + mod; /* Soma os valores */
        
        b = k; /* b = Axiliar para nao alterar valor de k*/
        
        for(a = 1; a <= n; a++) { /* Procurando valores iguais */
            
            aux = b % 10; /* Separando valor para comparação */
            
            b = b/10; /* Retirando valor ja utilizado para proxima repetição */

            if(mod == aux) { 
                modAux++ ; /* Quantidade de vezes que o mesmo valor aparece */
            }
        }
        if (modAux >= 1){
            cont = cont - mod; /* Removendo valores repetidos*/
        }
        modAux = 0; /* Zerando a contagem para a proxima repetição*/
    }
    printf("%d", cont);
   
    return 0;
}
