#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int vetor[], int tamanho)
{
    int i, j, temporary;
    for(i = 0; i < tamanho; i++)
    {
        for(j = 0; j < (tamanho - i - 1); j++)
        {
            if(vetor[j] > vetor[j + 1]){
                temporary = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temporary;
            }
        }
    }
}

int main()
{   
    int tamanho, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int*) malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    printf("Digite os elementos do vetor:\n");
    for(i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }

    bubbleSort(vetor, tamanho);

    printf("Valores ordenados:\n");
    for(i = 0; i < tamanho; i++){
        printf("%d\n", vetor[i]);
    }

    free(vetor);

    return 0;
}
