#include <stdlib.h>
#include <stdio.h>

//é solicitado uma explicação para o erro que ocorre referente a essa questão em comparação com a anterior, a variavel do tipo inteiro nao consegue guardar o valor
//gerado pelo fatorial de numeros maiores que 12, portanto para corrigir o erro é necessário utilizar variáveis do tipo double como feito abaixo

int main(){
  int n;
  double fat = 1;

  printf("<< Fatorial >>\n");

  for (n = 1; n <= 15; n++){
    fat = fat * n;
    if(n >= 11){
    printf("%d! = %.0lf\n", n , fat);
  }
  }
  return 0;
}
