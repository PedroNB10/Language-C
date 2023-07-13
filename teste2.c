#include <stdio.h>
#include <stdlib.h> // malloc

int main (){

    int N = 1, linhas = 2,colunas = 2;
    int * vet = (int *) malloc(N * sizeof(int));
    int **matriz = (int **) malloc(linhas * sizeof(int*));
    
    matriz[0] = (int*) malloc(linhas *colunas * sizeof(int));

    if(!vet || !matriz || !matriz[0]){
        printf("Memória insuficiente\n");
        exit(1);
    }

    int i, j;



    for(i = 1; i < linhas; i++){
        matriz[i] = matriz[i -1] + colunas;
    }


    free(vet);
    free(matriz[0]);
    free(matriz);

    return 0;
}