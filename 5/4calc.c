/* Nota: 10 / 10 */
#include <stdio.h>

int main(void) {
    
    float a, b, res;
    char op;
    scanf("%f %f %c", &a, &b, &op);
    
    if(b != 0){
        switch (op) {
            case '+':
                res = a + b;
                printf("%.2f", res);
            break;
            
            case '-':
                res = a - b;
                printf("%.2f", res);
            break;
            
            case '*':
                res = a * b;
                printf("%.2f", res);
            break;
            
            case '/':
                res = a / b;
                printf("%.2f", res);
            break;
            
            default:
                printf("Erro: operação inválida.");
            break;
        }    
    }else {
        printf("Erro: tentativa de divisão por zero.");
    }
    
    return 0;
}
