#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int linhas,colunas;
    int menorValor,linhaMenor,colunaMenor;
    int maiorValor,linhaMaior,colunaMaior;
    srand(time(NULL));

    scanf(" %d %d", &linhas, &colunas);
    
    int ** matriz = (int **) malloc(linhas * sizeof(int *));

    matriz[0] = (int*) malloc(linhas * colunas * sizeof(int));

    int i, j;


    for(i = 1; i < linhas ; i++){
        matriz[i] = matriz[i -1] + colunas;
    }

    if(!matriz || !matriz[0]){
        printf("Memória insuficiente\n");
        exit(1);
    }

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz[i][j] = rand() % 10;
           // scanf(" %d", &matriz[i][j]);
            printf("%d ", matriz[i][j]);
           
        }
        printf("\n");
    }

    menorValor = matriz[0][0];
    linhaMenor = 0;
    colunaMenor = 0;
    
    maiorValor = matriz[0][0];
    linhaMaior = 0;
    colunaMaior = 0;

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            if(matriz[i][j] > maiorValor){
                maiorValor = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
            if(matriz[i][j] < menorValor){
                menorValor = matriz[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }
    }

    printf("Maior valor: %d e está na posição matriz[%d][%d]\n", maiorValor,linhaMaior,colunaMaior);
    printf("Menor valor: %d e está na posição matriz[%d][%d]\n", menorValor,linhaMenor,colunaMenor);
    

    free(matriz[0]);
    free(matriz);



    return 0;
}