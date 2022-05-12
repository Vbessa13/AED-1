#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int binario[4],r = 0;//número em binário e resultado
    int i,j;//contador

    printf("== Conversor de numeros binarios ==\n");
    printf("Digite o 1o. bit: ");
    scanf("%d",&binario[0]);
    printf("Digite o 2o. bit: ");
    scanf("%d",&binario[1]);
    printf("Digite o 3o. bit: ");
    scanf("%d",&binario[2]);
    printf("Digite o 4o. bit: ");
    scanf("%d",&binario[3]);

    int invert[4];

    for(j=0,i=3; j<=3,i>=0; j++,i--){
        invert[j] = binario[i];
    }
//printf("%d%d%d%d",binario[0],binario[1],binario[2],binario[3]);
//printf("\n%d%d%d%d",invert[0],invert[1],invert[2],invert[3]);
    for(i=0; i<=3; i++){
        if(invert[i] == 1){
            r = r + pow(2,i);
        }
    }

    printf("%d",r);

    return 0;
}







