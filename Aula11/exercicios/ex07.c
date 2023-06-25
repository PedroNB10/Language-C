#include <stdio.h>
#include <stdlib.h> //malloc
#define TAM 10
int main (){

    int *vetA,*vetB;

    vetA = (int*) malloc(TAM * sizeof(int));
    vetB = (int*) malloc(TAM * sizeof(int));

    return 0;
}