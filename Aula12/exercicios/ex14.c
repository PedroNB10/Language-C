#include <stdio.h>
#include <stdlib.h>


int * vetSoma(int *vetA, int*vetB, int tamanho);

int main()
{
    int tamanho;

    scanf("%d", &tamanho);
    int *vetA = (int *)malloc(tamanho * sizeof(int));
    int *vetB = (int *)malloc(tamanho * sizeof(int));
    int *vetResultado = NULL;

    int *i = NULL;

    for (i = vetA; i < vetA + tamanho; i++)
    {
        scanf(" %d", i);
    }

    for (i = vetB; i < vetB + tamanho; i++)
    {
        scanf(" %d", i);
    }

   vetResultado = vetSoma(vetA, vetB, tamanho);

    // for (i = vetA; i < vetA + tamanho; i++)
    // {
    //     printf(" %d", *i);
    // }

    // for (i = vetB; i < vetB + tamanho; i++)
    // {
    //     printf(" %d", *i);
    // }

        for (i = vetResultado; i < vetResultado + tamanho; i++)
    {
        printf("%d ", *i);
    }

    free(vetA);
    free(vetB);
    free(vetResultado);

    

    return 0;
}

int * vetSoma(int *vetA, int*vetB, int tamanho){


    int *vetResultado = (int *)malloc(tamanho * sizeof(int));
    int i = 0;


    while(i < tamanho){

            *(vetResultado + i) = *(vetA + i) + *(vetB + i);

        i++;
       
    }



    return vetResultado;
    
       
    
    
}