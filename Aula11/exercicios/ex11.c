#include <stdio.h>
#include <stdlib.h>

int main()
{

    int M, N;

    scanf(" %d %d", &M, &N);
    int vetA[M], vetB[N], i, j, k = 0;
    int *pointA = vetA, *pointB = vetB;
    int *vetUnion = (int *)malloc((M + N) * sizeof(int)); // alocou o espaço maximo
    int *vetIntersection = (int *)malloc((M > N ? N : M) * sizeof(int)); // alocou o espaço maximo
    int lastPositionVetUnion = M;
    int existeValorEmComum = 0;

    if (!vetUnion)
    {
        printf("Memoria Insuficiente!\n");
        exit(1);
    }

    for (i = 0; i < M; i++)
    {
        scanf(" %d", pointA + i);
        vetUnion[i] = pointA[i];
    }

    for (i = 0; i < N; i++)
    {
        scanf(" %d", pointB + i);
        existeValorEmComum = 0;
        for (j = 0; j < M; j++)
        {
            if (pointB[i] == pointA[j])
            {
                vetIntersection[k] = pointB[i];
                k++;
                existeValorEmComum = 1;
                break;
            }
        }

        if (existeValorEmComum == 0)
        {

            vetUnion[lastPositionVetUnion] = pointB[i];
            lastPositionVetUnion++;
        }
    }

    printf("\n");

    printf("Uniao: ");

    for (i = 0; i < lastPositionVetUnion; i++)
    {
        printf("%d ", vetUnion[i]);
    }

    printf("\n");

    printf("Intersecção: ");

    for (i = 0; i < k; i++)
    {
        printf("%d ", vetIntersection[i]);
    }

    printf("\n");

    printf("VetA - VetB: ");
    for (i = 0; i < M; i++)
    {
        existeValorEmComum = 0;

        for (j = 0; j < N; j++)
        {
            if (pointA[i] == pointB[j])
            {
                existeValorEmComum = 1;
                break;
            }
        }

        if (existeValorEmComum == 0)
            printf("%d ", pointA[i]);
    }

    printf("\n");

    free(vetUnion);
    free(vetIntersection);

    return 0;
}