#include <stdio.h>

int main ()
{
    int pecas;
    int segundos;
    int min;
    int horas = 0;
    printf("Digite a quantidade de pecas a serem produzidas: ");
    scanf("%d",&pecas);
    segundos = pecas * 17;
    min = (float) segundos /60;
    min = (int) min;
    segundos = (segundos % 60);

    if(min >= 60){
        horas = (float) min /60;
        horas = (int) horas;
        min = min % 60;
    }
    printf("%dh %dmin %ds \n",horas,min,segundos);
    return 0;
}