#include <stdio.h>
#include <stdlib.h> // malloc
#include <math.h>
int main()
{
    int N, i, contador = 0, idx;
    scanf(" %d", &N);
    int *indiceNumProxMedia = &idx;
    double menorVariacao;
    double vet[N], *ponteiroArray = vet;
    double soma = 0, media, precisao;

    ponteiroArray = vet;
    indiceNumProxMedia = &idx;

    for (i = 0; i < N; i++)
    {
        scanf("%lf", (ponteiroArray + i)); // é a mesma coisa que vet[i]
        soma = soma + (vet[i]);
    }
    media = soma / N;
    menorVariacao =  fabs(vet[0] - media);
    for (i = 0; i < N; i++)
    {
        precisao = fabs(vet[i] - media);
        if (precisao < menorVariacao)
        {
            menorVariacao = precisao;
            *indiceNumProxMedia = i;
        }
    }

    printf("Valor mais próximo da média: %.2lf posição: vet[%d]\n", vet[idx], idx);
    printf("media: %.2lf\n", media);
    return 0;
}