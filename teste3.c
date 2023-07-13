#include <stdio.h>
#include <stdlib.h>

int main ()
{       
    int n =1, linhas = 2, colunas =3;

    int * vet = (int*) malloc(n * sizeof(int));

    int **matriz = (int **) malloc(linhas * sizeof(int *));
    matriz[0] = (int *) malloc(linhas * colunas * sizeof(int));

    int i , j;
    
    for(i = 1; i < linhas; i++){
        matriz[i] = matriz[i-1] + colunas;
    }


    if(!matriz || !matriz[0] || !vet){
        printf("Memória insuficiente\n");
        exit(1);
    }   

    free(matriz[0]);
    free(matriz);
    free(vet);
    




    return 0;
}