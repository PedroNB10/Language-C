#include <stdio.h>
#include <math.h>
int main ()
{
    int num;
    float raizCubica;
    float raizQuarta;
    double soma;

    printf("Digite um numero:");
    scanf("%d",&num);
    soma = pow(num,(1.0/3.0)) +  pow(num, (1.0/4.0));
    printf("%.2lf \n",soma);
    return 0;
}