#include <stdio.h>
#include <stdlib.h> //malloc
#define linhas 4
#define colunas 3

int main ()
{

    int **matriz = (int**) malloc(linhas * sizeof(int *));// vetor linha, ponteiro que armazena ponteiro 

    matriz[0] = (int*) malloc(linhas  * colunas * sizeof(int));

    int i;

    for(i = 0; i < linhas; i++)
    {
        matriz[i] = matriz[i - 1] + colunas;
    }


    return 0;
}