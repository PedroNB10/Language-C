#include <stdio.h>

int main () 
{
    float tempCelsius;
    float tempFah;


    printf("Digite a temperatura em Celsius: ");
    
    scanf("%f",&tempCelsius);
    tempFah = tempCelsius * 1.8 + 32;
    printf("Temperatura em Fahrenheit:%f \n",tempFah); 
    return 0;

}