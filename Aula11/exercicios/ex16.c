#include <stdio.h>

int main ()
{
    int linhas,colunas;

    int ** matriz = (int **) malloc(linhas * sizeof(int *));

    matriz[0] = (int*) malloc(linhas * colunas * sizeof(int));

    int i, j;


    for(i = 1; i < linhas * colunas; i++){
        matriz[i] = matriz[i -1] + colunas;
    }
    

    return 0;
}