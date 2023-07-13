#include <stdio.h>
#include <stdlib.h> //malloc
#define linhas 4
#define colunas 3

int main ()
{

    int **matriz = (int**) malloc(linhas * sizeof(int *));// vetor linha, ponteiro que armazena ponteiro 

    matriz[0] = (int*) malloc(linhas  * colunas * sizeof(int));

    int i,j;

    for(i = 1; i < linhas; i++)
    {
        matriz[i] = matriz[i - 1] + colunas;
    }


    printf("Leitura da matriz:\n");
    
    for(i = 0; i < linhas; i++){    
        for(j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    
    printf("matriz criada\n");

    for(i = 0; i < linhas; i++){    
        for(j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    
    free(matriz[0]);
    free(matriz);

    return 0;
}