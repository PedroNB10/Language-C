#include <stdio.h>
#include <math.h>
int main () 
{
    float primeiroNum;
    float segundoNum;
    float terceiroNum;
    float quadradoDaSoma;

    printf("Digite tres valores \n");
    scanf("%f",&primeiroNum);
    scanf("%f",&segundoNum);
    scanf("%f",&terceiroNum);
    quadradoDaSoma = pow((primeiroNum + segundoNum + terceiroNum),2);
    printf("O quadrado da soma dos valores é: %f \n",quadradoDaSoma);

    return 0;
}