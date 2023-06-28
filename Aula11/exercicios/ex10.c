#include <stdio.h>
#include <stdlib.h> // malloc
#include <math.h>
int main()
{
    int N, i, contador = 0;
    int *indiceNumProxMedia = (int *)malloc(sizeof(int));
    scanf(" %d", &N);
    double *precisao = (double *)malloc((N) * sizeof(double)), menorVariacao = INFINITY;

  
    double *vet = (double *)malloc((N) * sizeof(double));
    double soma = 0, media;
 

    for (i = 0; i < N; i++)
    {
        scanf(" %lf", &vet[i]);
        soma = soma + (vet[i]);
    }
    media = soma / N;

    if (media == 0)
    {
        *indiceNumProxMedia = 0;
    }
    else
    {

        for (i = 0; i < N; i++)
        {

            precisao[i] = fabs(vet[i] - media);
            if (precisao[i] < menorVariacao)
            {
                menorVariacao = precisao[i];
                *indiceNumProxMedia = i;
            }
        }
    }

    printf("Valor mais próximo da média: %.2lf posição: vet[%d]\n", vet[*indiceNumProxMedia], *indiceNumProxMedia);
    printf("media: %.2lf\n", media);
    free(vet);
    free(indiceNumProxMedia);
    free(precisao);
    return 0;
}