#include <stdio.h>
#include <math.h>

int main () 
{
    float primeiroNum;
    float segundoNum;
    float terceiroNum;
    float somaDosQuadrados;

    printf("Digite tres valores: \n");
    scanf("%f",&primeiroNum);
    scanf("%f",&segundoNum);
    scanf("%f",&terceiroNum);

    somaDosQuadrados = pow(primeiroNum,2) + pow(segundoNum,2) + pow(terceiroNum,2);
    printf("A soma de seus quadrados eh: %f \n",somaDosQuadrados);

    return 0;


}