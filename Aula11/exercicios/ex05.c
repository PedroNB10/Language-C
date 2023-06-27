#include <stdio.h>
#define TAM 10


int main ()
{
    int vet[TAM], i, *point = NULL,soma;

    point = vet;

    for(i = 0; i < 10; i++)
    {
        scanf(" %d",&vet[i]);
    }

    printf("Antes da modificacao: \n");

    for(i = 0; i < 10; i++)
    {
        printf("%d\n",vet[i]);
    }



    for(i = 0; i < 10; i++)
    {
        *(point + i) =  *(point + i) + 1;
    }


    printf("Depois da modificacao: \n");
    for(i = 0; i < 10; i++)
    {
        printf("%d\n",vet[i]);
    }

    return 0;
}