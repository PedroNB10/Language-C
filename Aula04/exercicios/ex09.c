#include <stdio.h>

int main ()
{
    int faltas;
    int carga;
    float porcentagem;

    printf("Digite o total de horas de faltas acumuladas:");
    scanf("%d",&faltas);
    printf("Digite a carga horaria total:");
    scanf("%d",&carga);

    porcentagem = (float) faltas / carga *100;

    printf("Porcetagem de faltas: %.f%%\n ",porcentagem);
    return 0;
}