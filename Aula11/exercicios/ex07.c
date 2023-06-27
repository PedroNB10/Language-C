#include <stdio.h>
#include <stdlib.h> //malloc
#define TAM 10
int main (){

    int *vetA = (int*) malloc(TAM * sizeof(int)), i;
    int segundoMaior;
    int segundoMenor;

    if(!vetA) // ou p != true
    {
        printf("Memoria insuficiente...\n");
        exit(1);
    }
    
    for(i = 0; i < TAM; i++)
    {
        scanf(" %d", &vetA[i]);

        if(vetA[i] % 2 == 0)
        {
            vetA[i] +=1;
        }else{
            vetA[i] *=2;
        }
    }
    printf("Imprimindo novo vetor:\n");
    for(i = 0; i < TAM; i++)
    {
       
        printf("%d\n", vetA[i]);
        
    }
    free(vetA);







    return 0;
}