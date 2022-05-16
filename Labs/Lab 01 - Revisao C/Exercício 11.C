/** criador: Vitor Santini  Bessa
 *  matricula: 11821BCC010
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 1 //a variavel definida como 'TAM' irá definir a quantidade de pessoas na agenda


struct endereco{ //struct criado para agrupar as variaveis relacionadas ao endereço do cliente
    char rua[20];
    int numero[4];
    char complemento[30];
    char bairro[15];
    int cep[10];
    char cidade[15];
    char estado[10];
    char pais[10];
};

struct pessoa{ //struct criado para agrupar as variaveis com dados do cliente
    char nome[10];
    char email[30];
    struct endereco ender; //variavel 'ender' referindo-se ao struct endereço listado acima, agrupando junto com dados do cliente
    int DDD[2];
    int telefone[10];
    int dia[2];
    int mes[2];
    int ano[4];
    char obs[50];
};

int main(){

    struct pessoa agenda[TAM]; //variavel/array do tipo struct pessoa

    int m[2],dd[2];
    char rem_nome[10];
    int i,op,num[4],ce[10],d[2],t[10],di[2],me[2],a[4];
    char n[10],em[30],r[20],c[30],b[15],ci[15],es[10],pa[10],ob[50];

    do{
    printf("------ AGENDA ------\n"); //Menu para consulta de opções do que o programa oferece
    printf("[1] - Inserir Pessoa\n");
    printf("[2] - Remover Pessoa\n");
    printf("[3] - Buscar (Mes de Aniversario)\n");
    printf("[4] - Buscar (Dia e mes de Aniversario)\n");
    printf("[5] - Imprimir\n");
    printf("[6] - Sair\n");
    scanf("%d",&op);


    switch(op){
    case 1:
        for(i=0; i<TAM; i++){
        printf("\nDigite o nome da pessoa:\n");
        scanf("%s",&agenda[i].nome);
        printf("\nDigite o email da pessoa:\n");
        scanf("%s",&agenda[i].email);
        printf("\nDigite a rua da pessoa:\n");
        scanf("%s",&agenda[i].ender.rua);
        printf("\nDigite o numero da casa da pessoa:\n");
        scanf("%d",&agenda[i].ender.numero);
        printf("\nDigite o complemento:\n");
        scanf("%s",&agenda[i].ender.complemento);
        printf("\nDigite o bairro:\n");
        scanf("%s",&agenda[i].ender.bairro);
        printf("\nDigite o cep:\n");
        scanf("%d",&agenda[i].ender.cep);
        printf("\nDigite a cidade:\n");
        scanf("%s",&agenda[i].ender.cidade);
        printf("\nDigite o estado:\n");
        scanf("%s",&agenda[i].ender.estado);
        printf("\nDigite o pais:\n");
        scanf("%s",&agenda[i].ender.pais);
        printf("\nDigite o DDD:\n");
        scanf("%d",&agenda[i].DDD);
        printf("\nDigite o telefone:\n");
        scanf("%d",&agenda[i].telefone);
        printf("\nDigite o dia do aniversario:\n");
        scanf("%d",&agenda[i].dia);
        printf("\nDigite o mes do aniversario:\n");
        scanf("%d",&agenda[i].mes);
        printf("\nDigite o ano do aniversario:\n");
        scanf("%d",&agenda[i].ano);
        printf("\nDigite uma observacao:\n");
        scanf("%s",&agenda[i].obs);
        }
        break;
    case 2:
        printf("Informe o nome do contato a ser removido: ");
        scanf("%s",&rem_nome);

        for(i=0; i<TAM; i++){
            if(strcmp(agenda[i].nome,rem_nome)==0){
                agenda[i] = agenda[i+1];
            }
        }
        printf(">> Contato '%s' removido com SUCESSO <<\n ",rem_nome);

        break;
    case 3:
        printf("Digite o mes do aniversario: \n");
        scanf("%d",&m);

        for(i=0; i<TAM; i++){
            if(strcmp(agenda[i].mes,m)==0){
                printf("\nNome:%s\n",agenda[i].nome);
                printf("Email:%s\n",agenda[i].email);
                printf("Rua:%s\n",agenda[i].ender.rua);
                printf("Numero:%d\n",agenda[i].ender.numero[0]);
                printf("Complemento:%s\n",agenda[i].ender.complemento);
                printf("Bairro:%s\n",agenda[i].ender.bairro);
                printf("CEP:%d\n",agenda[i].ender.cep[0]);
                printf("Cidade:%s\n",agenda[i].ender.cidade);
                printf("Estado:%s\n",agenda[i].ender.estado);
                printf("Pais:%s\n",agenda[i].ender.pais);
                printf("Telefone:(%d) %d\n",agenda[i].DDD[0],agenda[i].telefone[0]);
                printf("Aniversario: %d/%d/%d\n",agenda[i].dia[0],agenda[i].mes[0],agenda[i].ano[0]);
                printf("Observacao:%s\n",agenda[i].obs);
            }
        }

        break;
    case 4:
        printf("Digite o dia e o mes de aniversario: \n");
        printf("Dia: ");
        scanf("%d",&dd);
        printf("Mes: ");
        scanf("%d",&m);
        for(i=0; i<TAM; i++){
        if(strcmp(agenda[i].mes,m)==0 && strcmp(agenda[i].dia,dd)==0){
                printf("\nNome:%s\n",agenda[i].nome);
                printf("Email:%s\n",agenda[i].email);
                printf("Rua:%s\n",agenda[i].ender.rua);
                printf("Numero:%d\n",agenda[i].ender.numero[0]);
                printf("Complemento:%s\n",agenda[i].ender.complemento);
                printf("Bairro:%s\n",agenda[i].ender.bairro);
                printf("CEP:%d\n",agenda[i].ender.cep[0]);
                printf("Cidade:%s\n",agenda[i].ender.cidade);
                printf("Estado:%s\n",agenda[i].ender.estado);
                printf("Pais:%s\n",agenda[i].ender.pais);
                printf("Telefone:(%d) %d\n",agenda[i].DDD[0],agenda[i].telefone[0]);
                printf("Aniversario: %d/%d/%d\n",agenda[i].dia[0],agenda[i].mes[0],agenda[i].ano[0]);
                printf("Observacao:%s\n",agenda[i].obs);
            }
        }

        break;
    case 5:
        for(i=0; i<TAM; i++){
        printf("\nNome:%s\n",agenda[i].nome);
        printf("Email:%s\n",agenda[i].email);
        printf("Rua:%s\n",agenda[i].ender.rua);
        printf("Numero:%d\n",agenda[i].ender.numero[0]);
        printf("Complemento:%s\n",agenda[i].ender.complemento);
        printf("Bairro:%s\n",agenda[i].ender.bairro);
        printf("CEP:%d\n",agenda[i].ender.cep[0]);
        printf("Cidade:%s\n",agenda[i].ender.cidade);
        printf("Estado:%s\n",agenda[i].ender.estado);
        printf("Pais:%s\n",agenda[i].ender.pais);
        printf("Telefone:(%d) %d\n",agenda[i].DDD[0],agenda[i].telefone[0]);
        printf("Aniversario: %d/%d/%d\n",agenda[i].dia[0],agenda[i].mes[0],agenda[i].ano[0]);
        printf("Observacao:%s\n",agenda[i].obs);
        }
        break;
    case 6:
        exit(0);
        break;
    }
    }while(1 >= op <= 6);

    return 0;
    }
