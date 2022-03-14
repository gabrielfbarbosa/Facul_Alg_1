#include <stdio.h>
#include <string.h>

typedef struct { /*endereço*/
    char rua[80];/* rua (até 80 letras, com possíveis espaços) {Pegar com '%[^\n]'}*/
    int numero; /*número*/
    char bairro[30];/* bairro (até 30 letras, com possíveis espaços), {Pegar com '%[^\n]}'*/
    char cidade[30];/* cidade (até 30 letras, com possíveis espaços), {Pegar com '%[^\n]'}*/
    char estado[2];/* estado (sigla, duas letras maiúsculas) e  {Pegar com '%[^\n]'}*/
       
} endereco;

typedef struct {
    int dia;
    int mes;
    int qtdHoras;
}lista;

typedef struct {
    int matricula; /* matrícula (número natural) {Numero natural (inteiro e positivo)}*/
    lista hora[366]; /*uma lista de dados (dia, mês e quantidade inteira de horas) sobre horas extras que aquele funcionário trabalhou*/
} cad_ficha;/* Pode ter até 20 fixas*/

typedef struct {
    int matricula; /* matrícula (número natural) {Numero natural (inteiro e positivo)}*/
    char nome[20];/* nome (até 20 letras, sem espaços) {Pegar com '%s'}*/
    char sobrenome[40];/* Sobrenome (até 40 letras, com possíveis espaços) {Pegar com '%[^\n]'}*/
    int idade;
    endereco end;
    char CEP[9]; 
    int numcc;
} regFunc; /* Pode cadastrar até 10 funcionarios Vetor de 10*/



int main(void){

    regFunc func[10];
    cad_ficha hrEx[20];
    char op[10];
    int i, j, k, x, y, a, b, w, cont, registro, mes;
    float valorHr[12], horaCal, somaHr;
    
    for(w = 0; w< 12; w++) { /*Recebe o os valores das horas de cada mes*/
        scanf("%f", &valorHr[w]);
    }

    scanf("%s", op);

    while ( strcmp(op, "sair")) {
        i = 0;
        while ( !strcmp(op, "cad_func") ) {   
            scanf("%d",&func[i].matricula);
            scanf("%s",func[i].nome);
            scanf(" %[^\n]", func[i].sobrenome);
            scanf("%d",&func[i].idade);

            scanf(" %[^\n]", func[i].end.rua);
            scanf("%d", &func[i].end.numero);
            scanf(" %[^\n]", func[i].end.bairro);
            scanf(" %[^\n]", func[i].end.cidade);
            scanf(" %[^\n] ",func[i].end.estado);
            scanf(" %[^\n]", func[i].CEP);

            scanf("%s", op);
            i++;
        }
        
        j = 0;
        
        while ( !strcmp(op, "cad_ficha") ) {
            scanf("%d",&hrEx[j].matricula);
            k = 0;
            do { /*Adicionando HOras*/
                scanf("%d",&hrEx[j].hora[k].dia);
                if( hrEx[j].hora[k].dia != 0) {
                    scanf("%d",&hrEx[j].hora[k].mes);
                    scanf("%d",&hrEx[j].hora[k].qtdHoras);
                    horaCal = hrEx[j].hora[k].qtdHoras * valorHr[hrEx[j].hora[k].mes-1];
                    somaHr = somaHr + horaCal; 
                }
                k++;
               
            } while (hrEx[j].hora[k-1].dia != 0);
            
            scanf("%s", op);
           j++; 
        }

        while (!strcmp(op, "lista_func")) {
            for(x = 0; x < i; x++) {
                printf("%s %s, %d anos\n",func[x].nome, func[x].sobrenome, func[x].idade);
                printf("Rua: %s, Número %d, %s, ", func[x].end.rua, func[x].end.numero, func[x].end.bairro);
                printf("%s, ", func[x].end.cidade);
                printf("%s, ",func[x].end.estado);
                printf("CEP %s\n", func[x].CEP);
                
            }
            scanf("%s", op);

        }
        cont = 0;
        while (!strcmp(op, "rel_geral")) {
            scanf("%d", &registro);
            for(y = 0; y < i; y++){
                if( func[y].matricula == registro){
                   printf("%s %s - ",func[x].nome, func[x].sobrenome);
                    printf("%s %s", func[y].end.cidade, func[y].end.estado);
                    printf(" - R$ %.2f\n", somaHr);
                    cont++;
                }
            }
            if(cont == 0){
                printf("Funcionário não cadastrado.\n");
            }

            scanf("%s", op);
        }

        while ( !strcmp(op, "rel_funcm")) {
            scanf("%d", &mes);
            for(a = 0; a < j; a++){
                for(b = 0; b < k; b++){
                    if(hrEx[a].hora[b].mes == mes) {
                        printf("%s %s\n",func[a].nome, func[a].sobrenome);
                    }
                }
            }
            scanf("%s", op);
        }
    }
    
    return 0;
}
 