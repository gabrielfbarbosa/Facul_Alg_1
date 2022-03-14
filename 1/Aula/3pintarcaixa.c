/* Autor: Gabriel Felipe Barbosa*/
#include <stdio.h>
#include <math.h>


int main(void){

    float  caixa, x, y, z, gasto, ValorLata, maoObra, caixaReal, ValorRolo;
    int rolo;
    double lata, litro;

    scanf("%f %f %f", &x, &y, &z);

    caixa =((x*y)*2) + ((x*z)*2) + ((y*z)*2); /*Calculo das areas à pintar*/

    caixaReal = caixa;

    caixa = ceil(caixa);

    litro = caixaReal * 3; /*Litros gasto para pintar*/

rolo = ceil(caixa / 10); /*Saber se > 10m²*/
    
ValorRolo = (rolo * 5) ; /*Valor adicional do rolo caso > 10m²*/

    maoObra = caixa * 20; 

    lata = ceil(litro/5); /*Arredondar para "cima", latas inteiras*/

    ValorLata = lata*45;

    gasto =   maoObra + ValorLata + ValorRolo; /* Vrolo 5 valor de 1 rolo*/

    printf("\n Area total: %.2f.\n", caixaReal);

    printf("\n São necessários %.2f litros de tinta para pintar a caixa externamente.\n", litro);

printf("\n Quantidade de Rolo Adicional: %.2d.\n", rolo);

printf("\n Valor do Rolo Adicional: %.2f.\n", ValorRolo);

    printf("\n Valor da Mão de Obra: %.2f.\n", maoObra);

    printf("\n Quantidade de latas: %.2f.\n", lata);

    printf("\n Valor total das latas: %.2f.\n", ValorLata);

    printf("\n O valor total gasto será de R$ %.2f.\n", gasto);
    
    return 0;
}
