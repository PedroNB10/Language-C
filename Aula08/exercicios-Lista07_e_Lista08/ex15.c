#include <stdio.h>

int main (){
    
    int N,i,j,somasIguais = 0;
    scanf("%d",&N);
    
    int matriz[N][N];
    int somaLinhas[N],somaD1 = 0,somaD2 = 0,somaColunas[N];    
//leitura da matriz

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            scanf("%d",&matriz[i][j]);
        }
    }


  for(i = 0; i < N; i++){
            somaD1 = somaD1 + matriz[i][i];
            somaD2 = somaD2 + matriz[N-i-1][i];
            somaLinhas[i] = 0;
            somaColunas[i] = 0;
           for(j = 0; j < N; j++){
                   somaLinhas[i] = somaLinhas[i] + matriz[i][j];
                   somaColunas[i] = somaColunas[i] + matriz[j][i];

                }
     }

 for(i = 0; i < N ; i++){
    if(somaLinhas[i] == somaD1){
        somasIguais++;
    }

     if(somaColunas[i] == somaD1){
            somasIguais++;
        }
}

if(somasIguais == 2 * N && somaD1 == somaD2){
    printf("sim");
}

else{
    printf("nao");
}


    
    return 0;
}