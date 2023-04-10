#include <stdio.h>

int main ()
{
    float tempFah;
    float tempCelsius;

    printf("Digite a temperatura em Fahrenheit:");
    scanf("%f",&tempFah);
    tempCelsius = (tempFah - 32)/(1.8);
    printf("Temperatura em Celsius: %f \n",tempCelsius);

}