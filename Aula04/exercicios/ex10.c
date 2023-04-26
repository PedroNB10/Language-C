#include <stdio.h>

int main ()
{
    int pecas;
    int segundos;
    float min;
    float horas = 0;
    printf("Digite a quantidade de pecas a serem produzidas: ");
    scanf("%d",&pecas);
    segundos = pecas * 17;

    
    min = segundos /60;
    min = (int) min;
    segundos = (segundos % 60);
    if(min >= 60){
        horas = min /60;
        horas = (int) horas;
        min = (int) min % 60;
    }
    printf("%.f %.f %d \n",horas,min,segundos);
    return 0;
}