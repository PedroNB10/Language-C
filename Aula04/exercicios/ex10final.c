
#include <stdio.h>

int main ()
{
    int pecas;
    int segundos;
    int min;
    int horas;
    printf("Digite a quantidade de pecas a serem produzidas: ");
    scanf("%d",&pecas);
     
    segundos = pecas * 17;
    min = segundos /60;
    segundos = segundos - min * 60;
    horas = min / 60;
    min = min - horas * 60;

    printf("%d %d %d \n",horas,min,segundos);
    return 0;
}