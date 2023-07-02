#include <stdio.h>
#include <stdlib.h>

int *alocarVetor(int tamanho);
void leituraVetor(int *vetor, int tamanho);
void imprimirVetor(int *vetor, int tamanho);
void intersec(int *vetorA, int tamanhoA, int *vetorB, int tamanhoB, int *vetorResultado, int *tamanhoVetResultado);
void subtracao(int *vetorA, int tamanhoA, int *vetorB, int tamanhoB, int *vetorResultado, int *tamanhoVetResultado);
void soma(int *vetorA, int tamanhoA, int *vetorB, int tamanhoB, int *vetorResultado, int *tamanhoVetResultado);
void uniao(int *vetorA, int tamanhoA, int *vetorB, int tamanhoB, int *vetorResultado, int *tamanhoVetResultado);
void bubbleSort(int *vetor, int TAM);

int main()
{
    int M, N, *i = NULL, *j = NULL, k = 0;
    int tamanhoVetIntersec;
    int tamanhoVetUniao;
    int tamanhoVetSubtracao;

    scanf(" %d %d", &M, &N);
    int *vetA = alocarVetor(M);
    int *vetB = alocarVetor(N);
     tamanhoVetIntersec = M > N ? N : M;
     tamanhoVetUniao = M + N;
     tamanhoVetSubtracao  = M > N ? N : M;

    int *vetorIntersec = alocarVetor(tamanhoVetIntersec);
    int *vetorUniao = alocarVetor(tamanhoVetUniao);
    int *vetorSubtracao = alocarVetor(tamanhoVetSubtracao);

    leituraVetor(vetA, M);
    leituraVetor(vetB, N);

    intersec(vetA, M, vetB, N, vetorIntersec, &tamanhoVetIntersec);
    subtracao(vetA, M, vetB, N, vetorSubtracao, &tamanhoVetSubtracao);
    uniao(vetA, M, vetB, N, vetorUniao, &tamanhoVetUniao);

    printf("intersec:\n");
    imprimirVetor(vetorIntersec, tamanhoVetIntersec);
    printf("Subtracao:\n");
    imprimirVetor(vetorSubtracao, tamanhoVetSubtracao);
    printf("Uniao\n");
    imprimirVetor(vetorUniao,tamanhoVetUniao);
    free(vetA);
    free(vetB);
    free(vetorIntersec);
    free(vetorSubtracao);
    free(vetorUniao);

    return 0;
}

int *alocarVetor(int tamanho)
{
    int *vetor;
    vetor = (int *)malloc(tamanho * sizeof(int));

    if(!vetor){
        printf("Memória Insuficiente\n");
        exit(1);
    }
    return vetor;
}

void leituraVetor(int *vetor, int tamanho)
{
    int *i = NULL;
    for (i = vetor; i < vetor + tamanho; i++)
    {
        scanf(" %d", i);
    }
}

void imprimirVetor(int *vetor, int tamanho)
{
    int *i = NULL;
    for (i = vetor; i < vetor + tamanho; i++)
    {
        printf("%d\n", *i);
    }
}

void intersec(int *vetorA, int tamanhoA, int *vetorB, int tamanhoB, int *vetorResultado, int *tamanhoVetResultado)
{
    int *i = NULL, *j = NULL, k = 0;

    for (i = vetorA; i < vetorA + tamanhoA; i++)
    {
        for (j = vetorB; j < vetorB + tamanhoB; j++)
        {
            if (*i == *j)
            {
                *(vetorResultado + k) = *i;
                k++;
            }
        }
    }
    *tamanhoVetResultado = k;
    bubbleSort(vetorResultado,*tamanhoVetResultado);
}



void subtracao(int *vetorA, int tamanhoA, int *vetorB, int tamanhoB, int *vetorResultado, int *tamanhoVetResultado)
{

    int existeValorEmComum = 0;
    int *i = NULL, *j = NULL, k = 0;

    for (i = vetorA; i < vetorA + tamanhoA; i++)
    {
        existeValorEmComum = 0;
        for (j = vetorB; j < vetorB + tamanhoB; j++)
        {
            if (*j == *i)
            {
                existeValorEmComum = 1;
                break;
            }
        }

        if (existeValorEmComum == 0)
        {
            *(vetorResultado + k) = *i;
            k++;
        }
    }
    *tamanhoVetResultado = k;
    bubbleSort(vetorResultado,*tamanhoVetResultado);
}

void soma(int *vetorA, int tamanhoA, int *vetorB, int tamanhoB, int *vetorResultado, int *tamanhoVetResultado)
{
    int i, j = 0;

    for(i = 0; i < tamanhoA; i++)
    {
        *(vetorResultado + i) = *(vetorA + i);
    }

    for(i = tamanhoA; i < tamanhoA + tamanhoB; i++)
    {
        *(vetorResultado + i) = *(vetorB + j);
        j++;
    }

    
    bubbleSort(vetorResultado,*tamanhoVetResultado);
}

void uniao(int *vetorA, int tamanhoA, int *vetorB, int tamanhoB, int *vetorResultado, int *tamanhoVetResultado){
    int *i = NULL, *j = NULL, k = 0;

    // Copia os elementos do vetorA para o vetorResultado
    for (i = vetorA; i < vetorA + tamanhoA; i++) {
        *(vetorResultado + k) = *i;
        k++;
    }

    // Adiciona ao vetorResultado apenas os elementos de vetorB que não estão presentes em vetorA
    for (i = vetorB; i < vetorB + tamanhoB; i++) {
        int elementoRepetido = 0;
        for (j = vetorA; j < vetorA + tamanhoA; j++) {
            if ((*i) == *j) {
                elementoRepetido = 1;
                break;
            }
        }
        if (!elementoRepetido) {
            *(vetorResultado + k) = *i;
            k++;
        }
    }

    *tamanhoVetResultado = k;
    bubbleSort(vetorResultado,*tamanhoVetResultado);
}

void bubbleSort(int *vetor, int TAM)
{
    int i,j,temporary;
    for(i = 0; i < TAM; i++)
    {
        for(j = 0; j < (TAM - i - 1); j++)
        {
            if(*(vetor + j) > *(vetor + j + 1)){
                temporary = *(vetor + j);
                *(vetor + j) = *(vetor + j + 1);
                *(vetor + j + 1) = temporary;
            }

        }
    }

}   


