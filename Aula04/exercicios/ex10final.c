#include <stdio.h>

int main ()
{
    int pecas;
    int segundos;
    int min;
    int horas;
    printf("Digite a quantidade de pecas a serem produzidas: ");
    scanf("%d",&pecas);
    horas = (pecas * 17)/3600;
    min = (horas % 60) /60;
    segundos = min % 60;

    
    printf("%d%d %d \n",horas,min,segundos);
    return 0;
}