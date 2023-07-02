#include <stdio.h>
#include <stdlib.h>

void aloca(int **vet, int TAM);
void leitura(int *vetA, int *vetB, int M, int N);
void subtrai(int *vetorSubtracao, int *vetA, int *vetB, int M, int N, int *tamanhoDinamico);
void imprimir(int *vet, int TAM);
void intersec(int *vetorIntersec, int *vetA, int *vetB, int M, int N, int *tamanhoDinamico);
void uniao(int *vetorUniao, int *vetA, int *vetB, int M, int N, int *tamanhoDinamico);

int main()
{
    int N, M, tamanhoVetorDinamico = 0;
    int *vetorSubtracao = NULL, *vetorIntersec = NULL, *vetorUniao = NULL;
    int *vetA = NULL;
    int *vetB = NULL;

    scanf(" %d %d", &M, &N);
    aloca(&vetA, M);
    aloca(&vetB, N);
    leitura(vetA, vetB, M, N);
    aloca(&vetorSubtracao, M + N);
    subtrai(vetorSubtracao, vetA, vetB, M, N, &tamanhoVetorDinamico);
    printf("vetor Subtração:\n");
    imprimir(vetorSubtracao, tamanhoVetorDinamico);
    tamanhoVetorDinamico =  M > N ? N : M;
    aloca(&vetorIntersec,tamanhoVetorDinamico);
    printf("vetor Intersecção:\n");
    intersec(vetorIntersec, vetA, vetB, M, N, &tamanhoVetorDinamico);
    tamanhoVetorDinamico = 0;
    
    uniao(vetorUniao, vetA, vetB, M,N,&tamanhoVetorDinamico);
    printf("vetor União:\n");
    imprimir(vetorUniao,tamanhoVetorDinamico);
   
    free(vetA);
    free(vetB);
    free(vetorSubtracao);
    free(vetorIntersec);
    free(vetorUniao);

    return 0;
}

void aloca(int **vet, int TAM)
{
    *vet = (int *)malloc(TAM * sizeof(int));

    if (!vet)
    {
        printf("Memória Insuficiente\n");
        exit(1);
    }
}

void leitura(int *vetA, int *vetB, int M, int N)
{
    int *i = NULL, *j = NULL;
    for (i = vetA; i < vetA + M; i++)
    {
        scanf(" %d", i);
    }

    for (j = vetB; j < vetB + N; j++)
    {
        scanf(" %d", j);
    }
}

void subtrai(int *vetorSubtracao, int *vetA, int *vetB, int M, int N, int *tamanhoDinamico)
{
    int *i = NULL, *j = NULL, k = 0;
    int valorRepetiu = 0;

    for (i = vetA; i < vetA + M; i++)
    {
        valorRepetiu = 0;

        for (j = vetB; j < vetB + N; j++)
        {
            if (*i == *j)
            {
                valorRepetiu = 1;

                break;
            }
        }

        if (valorRepetiu == 0)
        {
            *(vetorSubtracao + k) = *i;
            // printf("%d\n", *i);
            k++;
        }
    }
    *tamanhoDinamico = k;
}

void intersec(int *vetorIntersec, int *vetA, int *vetB, int M, int N, int *tamanhoDinamico)
{
    int *i = NULL, *j = NULL, k = 0;

    for (i = vetA; i < vetA + M; i++)
    {

        for (j = vetB; j < vetB + N; j++)
        {
            if (*i == *j)
            {
                *(vetorIntersec + k) = *i;
            }
        }
    }
    *tamanhoDinamico = k;
}

void imprimir(int *vet, int n)
{
    int *i = NULL;

    for (i = vet; i < vet + n; i++)
    {
        printf("%d\n", *i);
    }
}

void uniao(int *vetorUniao, int *vetA, int *vetB, int M, int N, int *tamanhoDinamico)
{
    int*vetIntersec = NULL, tamVet = 0;
    int *vetResultado = NULL;

    int i, k = 0;

    for (i = 0; i < M + N; i++)
    {
        *(vetorUniao + k) = i;
         k++;
    }

    intersec(vetIntersec, vetA, vetB, M, N, &tamVet);
    //(int *vetorSubtracao, int *vetA, int *vetB, int M, int N, int *tamanhoDinamico)
    subtrai(vetResultado, vetorUniao,vetIntersec,k,tamVet,tamanhoDinamico);
    vetorUniao = vetResultado;
}