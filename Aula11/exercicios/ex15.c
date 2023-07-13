#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int linhas;
    int colunas;
    int i, j,numero,vezes = 0;

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

    printf("Digite qualquer valor de 0 a 10:");
    scanf(" %d", &numero);

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

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            if(matriz[i][j] == numero){
                vezes++;
                break;
            }
        }
      
    }

    if(vezes > 0){
        printf("O número %d está presente %d vezes na matriz\n",numero,vezes);
    }
    else{
        printf("O número %d não está contido na matriz\n",numero);
    }






    free(matriz[0]);
    free(matriz);

    return 0;
}
