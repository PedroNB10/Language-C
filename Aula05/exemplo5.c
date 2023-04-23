#include <stdio.h>

int main ()
{
    float num;

    printf("Digite um numero: ");
    scanf("%f",&num);

    if(num <= 10 ||  num >= 20){
        printf("O numero esta no intervalo \n");

    }
    return 0;
}