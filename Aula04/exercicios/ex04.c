#include <stdio.h>

int main ()
{
    float valorAgenciaA;
    float valorAgenciaB;
    float distanciaPercorrida;
    int dias;
    printf("Digite a quantidade de km a ser percorridos e a quantidade de dias para o aluguel do carro: \n");
    scanf("%f %d",&distanciaPercorrida,&dias);
    valorAgenciaA = 62 * dias + 1.4 * distanciaPercorrida;
    valorAgenciaB = 80 * dias + 1.2 * distanciaPercorrida;

    printf("Valor da Primeira Agencia: %.2f R$, Valor da Segunda Agencia: %.2fR$ \n",valorAgenciaA,valorAgenciaB);

    return 0;
}