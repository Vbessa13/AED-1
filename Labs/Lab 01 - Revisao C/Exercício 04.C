/** criador: Vitor Santini  Bessa
 *  matricula: 11821BCC010
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float imc, peso, altura;

    printf("Informe o valor do peso(Kg): ");
    scanf("%f",&peso);
    printf("Informe o valor da altura(m): ");
    scanf("%f",&altura);

    imc = peso/((altura)*(altura));

    if(imc < 18.5){
        printf("IMC = %f -> Magreza\n",imc);
    }else{
    if(18.5 >= imc <= 24.9){
        printf("IMC = %f -> Saudavel\n",imc);
    }else{
        if(25.0 >= imc <=29.9){
            printf("IMC = %f -> Sobrepeso\n",imc);
        }else{
            if(30.0 >= imc <= 34.9){
                printf("IMC = %f -> Obesidade Grau I\n",imc);
            }else{
                if(35.0 >= imc <= 39.9){
                    printf("IMC = %f -> Obesidade Grau II(severa)\n",imc);
                }else{
                    printf("IMC = %f -> Obesidade Grau III(morbida)\n",imc);
                }
            }
        }
    }
    }
    system("pause");
    return 0;
}
