#include <stdio.h>

int main (){
    int N,M,P;
    int i,j,k;
    scanf("%d %d",&M, &N);
    int matriz[M][N];
    
    for(i = 0; i < M; i++){ 
        for(j = 0; j < N; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    scanf("%d",&P);

    int vetor[P];

    for(i = 0; i < P; i++){
       scanf("%d",&vetor[i]); 
    }

    for(i = 0; i < M; i++){ 
        for(j = 0; j < N; j++){
            for(k = 0; k < P; k++){ 
                    if(vetor[k] % 2 != 0 && vetor[k] == matriz[i][j] ){
                        printf("%d ",matriz[i][j]);
                    }
            }
        }
    }

    return 0;
}