#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(NULL));
    int linhas,colunas;
    int i,j;
    scanf(" %d %d", &linhas,&colunas);

    int **matrizX = (int **) malloc(linhas * sizeof(int*));
    matrizX[0] = (int *) malloc(linhas * colunas * sizeof(int));

    for(i = 1; i < linhas; i++){
        matrizX[i] = matrizX[i -1] + colunas;

    }

    int **matrizY = (int **) malloc(colunas * sizeof(int*));
    matrizY[0] = (int *) malloc(linhas * colunas * sizeof(int));
    
    for(i = 1; i < colunas; i++){
        matrizY[i] = matrizY[i -1] + linhas;

    }

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matrizX[i][j] = rand() % 10;
            matrizY[j][i] = matrizX[i][j];
          //  scanf(" %d", &matrizX[i][j]);
        }
    }

    printf("\nMatriz X:\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            printf("%d ",matrizX[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Y:\n");
    for(i = 0; i < colunas; i++){
        for(j = 0; j < linhas; j++){
            printf("%d ",matrizY[i][j]);
        }
        printf("\n");
    }





    return 0;
}