/*Nota: 10 / 10 */
#include <stdio.h>
#include <string.h>

int main(void) {

    char op[10];
    int seq[20];
    int  i, auxI, aux;
    int num, val, w, z;
    scanf("%d", &num);
    
    i = 0;
    while (num != -1) {
        seq[i] = num;
        i++;
        scanf("%d", &num);
    }

    scanf("%s", op);
    while( strcmp(op, "fim")){ 
       
        while( !(strcmp(op,"insira") ) ) { 
            scanf("%d", &val);
            auxI = i + 1; 
            while(auxI != 0) { 
                auxI--;
                seq[auxI] = seq[auxI-1];
                if (auxI == 0) { 
                    seq[auxI] = val;
                }
            }
            i++;
            for (w = 0; w < i ; w++) { /*Ordenand*/
                for(z = w; z < i; z++){
                    if(seq[w] >= seq[z]) { 
                       aux = seq[w]; 
                        seq[w] = seq[z]; 
                        seq[z] = aux; 
                    }
                }
            }
            scanf("%s", op);
            
        }
        
        while( !(strcmp(op,"remova") ) ) { 
            scanf("%d", &val);
            while(val < i) { 
                seq[val] = seq[val+1];
                val++;
            }
            scanf("%s", op);
            i--;
        }   

        while ( !(strcmp(op,"imprima") )) { 
            for (w = 0; w < i ; w++) { 
                printf("%d ", seq[w]);
            }
            scanf("%s", op);
        }
    }

    return 0;
}
