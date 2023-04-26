#include <stdio.h>
#include <math.h>

int main ()
{
    float peso;
    int gotas;

    printf("Digite o seu peso:");
    scanf("%f",&peso);

    gotas = ((peso) /2) * 5;
    gotas = round(gotas);
    
    
    printf("Quantidade de gotas a ser ministrada:%d \n",gotas);

    return 0;
}