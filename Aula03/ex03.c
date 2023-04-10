#include <stdio.h>

int main()
{
    float primeiroValor;
    float segundoValor;
    float terceiroValor;
    float soma;

    printf("Digite 3 valores: \n");
    scanf("%f",&primeiroValor);
    scanf("%f",&segundoValor);
    scanf("%f",&terceiroValor);
    soma = primeiroValor + segundoValor + terceiroValor;
    printf("A soma dos valores:%f \n",soma);
    return 0;


}