#include <stdio.h>

int main ()
{
    float distancia;
    float tempo;
    float velocidade;
    
    printf("Digite a distancia em km: ");
    scanf("%f",&distancia);
    printf("Digite o tempo em horas: ");
    scanf("%f",&tempo);

    velocidade = distancia / tempo;

    printf("Velocidade media: %.1f \n",velocidade);

    return 0;

}