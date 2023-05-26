#include <stdio.h>

int main ()
{
    int i,j,p1Venceu = 0;
  

    int matriz[3][3];


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    for(i = 0; i < 3; i++){

            //linhas
            if(matriz[i][0]== 1 && matriz[i][1] == 1 && matriz[i][2] == 1){
                p1Venceu = 1;
            }

            //colunas
             if(matriz[0][i]== 1 && matriz[1][i] == 1 && matriz[2][i] == 1){
                p1Venceu = 1;
            }
            
    }

    //diagonal principal
    if(matriz[0][0]== 1 && matriz[1][1] == 1 && matriz[2][2] == 1){
        p1Venceu = 1;
    }

    //diagonal secundária
    if(matriz[0][2]== 1 && matriz[1][1] == 1 && matriz[2][0] == 1){
        p1Venceu = 1;
    }


    if(p1Venceu == 1){
        printf("sim");
    }

    else{
        printf("nao");
    }


    return 0;
  
}