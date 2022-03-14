/* Autor: Gabriel Felipe Barbosa 10/10*/
#include <stdio.h>

int main(void){
    
    int x1, y1, x2, y2, px, py, dx, dy;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2 , &y2, &px, &py);
 
    dx = x2 - x1;
    dy = y2 - y1;
    
   if(dx >= 0 && dy >= 0){ /* Quandrante 1 X+ e Y+ */
        if( px >= x1 && px <= x2){
            if (py >= y1 && py <= y2){
                printf("Interno");
            }else{
                printf("Externo");
            } 
        }else{
                printf("Externo");
        }
    }
    /* Quandrante 2 X- e Y+ */
    if (dx <= 0 && dy >= 0){ 
        if(px <= x1 && px >=x2){
            if (py >= y1 && py <= y2){
                printf("Interno");
            }else{
                printf("Externo");
            } 
        }else{
                printf("Externo");
        }
    }
    /* Quadrante 3 X- e Y-*/
    if (dx <= 0 && dy <= 0){ 
        if (px <= x1 && px >=x2){
            if(py <= y1 && py >= y2){
                printf("Interno");
            }else{
                printf("Externo");
            } 
        }else{
                printf("Externo");
        }
    }
    /* Quadrante 4 X+ e Y-*/
    if (dx >= 0 && dy <= 0){ 
        if(px >= x1 && px <= x2){
            if (py <= y1 && py >= y2){
                printf("Interno");
            }else{
                printf("Externo");
            } 
        }else{
                printf("Externo");
        }
    }
    
    return 0;
}
