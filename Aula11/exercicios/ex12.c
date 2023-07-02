#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int N;
    int i,contPar = 0,contImpar = 0; 
    scanf(" %d", &N);
    int *vetor = (int*) malloc( N * sizeof(int));

    if(!vetor){
        printf("Memória Insuficiente\n");
        exit(1);
    }

    for(i = 0; i < N; i++)
    {
        scanf(" %d", vetor + i);
        if(vetor[i] % 2 == 0)
        {
            contPar++;
        }   
    }
    contImpar = N - contPar;
    printf("Total de números pares: %d\n", contPar);
    printf("Total de números ímpares: %d\n", contImpar);

    free(vetor);

    return 0;
}