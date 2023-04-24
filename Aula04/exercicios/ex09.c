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

    porcentagem = faltas *100.0 / carga;

    printf("Porcetagem de faltas: %.f%%\n ",porcentagem);
    return 0;
}
