#include <stdio.h>
#include <stdlib.h>

struct individuo{
    int codigo_genetico[10]; //valores binarios aleatorios
    float aptidao_abs; //potencial de cada individuo (0.0 <= aptidao <= 10.0)
    float aptidao_relativa; //deve ser calculada em tempo de execução...
};

struct populacao{
    struct individuo *pop; //um vetor de N individuos
    int tamanho; //tamahno N da população (N = 100)
};

typedef struct populacao populacao;

int main(){
    int qtde, j = 0, i = 0;
    float soma = 0;
    double sorteio, resultado = 0;
    int par1[10], par2[10],k,l;

    printf("Insira a quantidade de individuos: ");
    scanf("%d",&qtde);

    populacao p;

    p.tamanho = qtde;

    p.pop = (struct individuo *) malloc(p.tamanho * sizeof(struct individuo));

    if(p.pop == NULL){
        printf("\nErro: Memoria Insuficiente!!\n");
        return -1;
    }

    for(i=0; i<qtde; i++){
        for(j=0; j<10; j++){
            p.pop[i].codigo_genetico[j] = rand()%2; //Sorteando sequencia de numeros binarios aleatorios para cada individuo
        }
    }

    for(i=0; i<qtde; i++){
            printf("Cod Genetico = ");
        for(j=0; j<10; j++){
            printf("%d",p.pop[i].codigo_genetico[j]);
        }
    printf("\n");
    }

    for(i=0; i<qtde; i++){
        p.pop[i].aptidao_abs = ((float)rand())/((float)RAND_MAX)*10.0;
        soma = soma + p.pop[i].aptidao_abs;
        printf("Apt Abs = %.2f\n", p.pop[i].aptidao_abs);
    }

    printf("soma = %f\n", soma); //Soma das aptidoes absolutas

    for(i=0; i<qtde; i++){
        p.pop[i].aptidao_relativa = p.pop[i].aptidao_abs / soma;
        printf("Apt Relativa = %.2f\n", p.pop[i].aptidao_relativa);
    }

    sorteio = ((double) rand()) / ((double) RAND_MAX);

    for(i=0; i<100000; i++){//realizando sorteio 100.000 vezes
        k = rand() % 100;
        //printf("%d\n", k);
        l = rand() % 100;
        par1[10] = p.pop[k].codigo_genetico;
        par2[10] = p.pop[l].codigo_genetico;
        printf("Par_%d = (%d,%d)\n",i,k,l);
    }




    return 0;
}
