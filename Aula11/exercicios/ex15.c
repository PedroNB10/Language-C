#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int linhas;
    int colunas;
    int i, j;

    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    int **matriz = (int **)malloc(linhas * sizeof(int *));
    matriz[0] = (int *)malloc(linhas * colunas * sizeof(int));

    for (i = 1; i < linhas; i++)
        matriz[i] = matriz[i - 1] + colunas;

    srand(time(0)); // Semente para números aleatórios

    // Preencher a matriz com números aleatórios de 0 a 9
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }

    // Imprimir a matriz
    printf("Matriz gerada:\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz[0]);
    free(matriz);

    return 0;
}
