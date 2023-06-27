#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void verificadorPos(int posMaior, int posMenor, int pos2Maior, int pos2Menor)
{

    while ((posMaior == pos2Maior || posMaior == pos2Menor) ||
           (posMenor == pos2Maior || posMenor == pos2Menor))
    {
        pos2Maior++;
        pos2Menor++;
    }
}

int main()
{

    int *vetor = (int *)malloc(TAM * sizeof(int));
    int i;
    int posMaior = 0;
    int posMenor = 1;
    int pos2Maior = 2;
    int pos2Menor = 3;

    if(!vetor){
        printf("Memoria Insuficiente\n");
        exit(1);
    }
    

    for (i = 0; i < TAM; i++)
    {
        scanf(" %d", &vetor[i]);
    }

    // maior e menor
    for (i = 0; i < TAM; i++)
    {
        if (vetor[i] > vetor[posMaior])
        {
            posMaior = i;
        }

        if (vetor[i] < vetor[posMenor])
        {
            posMenor = i;
        }
    }

    verificadorPos(posMaior, pos2Menor, pos2Maior, pos2Menor);

    for (i = 0; i < TAM; i++)
    {
        if (vetor[i] > vetor[pos2Maior] && vetor[i] < vetor[posMaior])
        {
            pos2Maior = i;
        }

        if (vetor[i] < vetor[pos2Menor] && vetor[i] > vetor[posMenor])
        {
            pos2Menor = i;
        }
    }

    printf("Maior: %d vetor[%d]\n", vetor[posMaior], posMaior);
    printf("Segundo Maior: %d vetor[%d]\n", vetor[pos2Maior], pos2Maior);
    printf("Menor: %d vetor[%d]\n", vetor[posMenor], posMenor);
    printf("Segundo Menor: %d vetor[%d]\n", vetor[pos2Menor], pos2Menor);

    free(vetor);

    return 0;
}