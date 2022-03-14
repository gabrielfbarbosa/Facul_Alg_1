#include <stdio.h>

int main(void) {

    int primeiro, segundo, auxPri, auxSeg, restoP, restoS, binarioP, binarioS, potPri10, potSeg10, maior, modBinPri, modBinSeg, eLog, eLogRes, pot10eLog, maiorBi, auxBiPri, auxBiSeg, pot2, modElog, deci;

    scanf("%d %d", &primeiro, &segundo);
    
    binarioP = 0;/* Para Formar o binario do PRIMEIRO valor */ 
    binarioS = 0;/* Para Formar o binario do SEGUNDO valor */ 
    potPri10 = 1;/* Para a potencia do PRIMEIRO binario valor */ 
    potSeg10 = 1; /* Para a potencia do SEGUNDO binario valor */ 
    pot10eLog = 1; /* Para a potencia do E LOGICO binario valor */

    while ( primeiro != -1 ) { /* Criterio de parada*/
        auxPri = primeiro; /* Auxiliar para o PRIMEIRO valor */
        auxSeg = segundo;  /* Auxiliar para o SEGUNDO valor */
        scanf("%d", &primeiro); /* Lendo os outros pares de valores */
        if( primeiro == -1){ /* Avaliando numero de parada */
            segundo = 0;        
        }else{
            scanf("%d", &segundo); /* Receber SEGUNDO valor*/
        }
        maior = auxPri; /* Rodar com base no maior valor, garante que os dois sejam transformados*/
        if(maior < auxSeg){
            maior = auxSeg;
        }
        while( maior != 0) {
            /*Calculo binario do PRIMEIRO*/
            restoP = auxPri % 2;
            binarioP = binarioP + restoP * potPri10;
            potPri10 = potPri10 * 10;
            auxPri = auxPri / 2;
            /*Calculo binario do SEGUNDO*/
            restoS = auxSeg % 2;
            binarioS = binarioS + restoS * potSeg10;
            potSeg10 = potSeg10 * 10;
            auxSeg = auxSeg / 2;
            maior = maior / 2; /* Garantido o ciclo do maior valor*/ 

        }
        printf("%d %d ", binarioP, binarioS);    
        maiorBi = binarioP; /* Rodando as repetiçoes com o maior binario*/
        auxBiPri = binarioP; /* Auxiliar para o PRIMEIRO Binario*/
        auxBiSeg = binarioS;  /* Auxiliar para o SEGUNDO Binario*/
        if(maiorBi < binarioS){
            maiorBi = binarioS; /* Garantindo o binario maior*/
        }
        eLogRes = 0; /* Para formar o Resultado do E Logico*/
        while(maiorBi != 0){
            modBinPri = auxBiPri % 10; /* Ultimo valor do PRIMEIRO binario */
            auxBiPri = auxBiPri / 10; 
            modBinSeg = auxBiSeg % 10; /* Ultimo valor do SEGUNDO binario */
            auxBiSeg = auxBiSeg /10;
            if ( modBinPri == 1 && modBinSeg == 1 ){ /* "Regra" para o E Logico*/
                eLog = 1;
            }else {
                eLog = 0;
            }
            eLogRes = eLog * pot10eLog + eLogRes; /* Formando o Binario do E Logico*/
            pot10eLog = pot10eLog * 10;
            maiorBi = maiorBi / 10; /* Garantido que roda para o maior valor por inteiro*/
        }
        printf("%d ",eLogRes);
        pot2 = 1; /* Ptencia para tranformar o binario do E Logico em Decimal*/
        deci = 0; /* Para formar o Decimal */ 
        while( eLogRes != 0) { /* conversão do E Logico para Decimal*/
            modElog = eLogRes % 10;
            deci = modElog * pot2 + deci;
            pot2 = pot2 * 2;
            eLogRes = eLogRes / 10;
        }
        printf("%d \n",deci);
        /* 'Resetando' os valores para um novo numero*/
        binarioP = 0;
        binarioS = 0;
        potPri10 = 1;
        potSeg10 = 1;
        pot10eLog = 1;
    }
    return 0;
