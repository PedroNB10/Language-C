#include <stdio.h>

int main ()
{
    int i,j,contador = 0;
    int matriz[4][4];


    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d",&matriz[i][j]);
        }
    }


     for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
           if( matriz[i][j] > 10){
                contador++;
           }
        }
    }

    printf("%d",contador);

 





    return 0;
  
}