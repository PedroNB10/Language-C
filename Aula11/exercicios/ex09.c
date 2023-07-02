#include <stdio.h>
#include <stdlib.h> //malloc



#define TAM 5

void bubbleSort(int *vetor); // protótipo de função

int main ()
{   

    int *vet = NULL, i;
    vet = (int*) malloc(TAM * sizeof(int));

  if(!vet) // ou p != true
    {
        printf("Memoria insuficiente...\n");
        exit(1);
    }


    for(i = 0; i < TAM; i++){
        scanf(" %d", &(*(vet + i)));
    }

    bubbleSort(vet);
    printf("valores ordenados:\n");
    for(i = 0; i < TAM; i++){
        printf("%d\n", *(vet + i));
    }

    free(vet);


    return 0;
}

void bubbleSort(int *vetor)
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
