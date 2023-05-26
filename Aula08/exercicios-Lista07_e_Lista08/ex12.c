#include <stdio.h>

int main ()
{
    int i,j;
    int M,N, linha,coluna;

     scanf("%d %d",&M,&N);

    int matriz[M][N];
    int maior = matriz[0][0];


    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            scanf("%d",&matriz[i][j]);
        }
    }


     for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
           if( matriz[i][j] >  maior ){
                maior = matriz[i][j];
                linha = i;
                coluna = j;
           }
          
        }
    }

    printf("%d %d %d",maior,linha, coluna);

 





    return 0;
  
}