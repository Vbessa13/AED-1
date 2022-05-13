#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int n[5];
    int soma = 0,i;
    float p = 0;
    float media, dp;

    printf("<< Media e Desvio Padrao >>\n");

    printf("Digite o valor 1: ");
    scanf("%d",&n[0]);
    printf("Digite o valor 2: ");
    scanf("%d",&n[1]);
    printf("Digite o valor 3: ");
    scanf("%d",&n[2]);
    printf("Digite o valor 4: ");
    scanf("%d",&n[3]);
    printf("Digite o valor 5: ");
    scanf("%d",&n[4]);

    for(i=0; i<5; i++){
        soma = soma + n[i];
    }

    media = soma/(5);

    for(i=0; i<5; i++){
        p = p + pow(n[i] - media, 2);
    }

    dp = sqrt(p/(5-1));

    printf("A media eh %.2f e o desvio padrao eh %.13f\n",media,dp);

    return 0;
}
