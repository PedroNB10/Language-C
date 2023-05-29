#include <stdio.h>

int main (){

    int l1,c1;
    int l2,c2;
    int i,j;

    scanf("%d %d",&l1,&c1);
    int matrizA[l1][c1];

    for(i = 0; i < l1; i++){
        for(j = 0; j < c1; j++){
            scanf("%d",&matrizA[i][j]);
        }
    }
    scanf("%d %d",&l2,&c2);
    int matrizB[l2][c2];

    for(i = 0; i < l1; i++){
            for(j = 0; j < c1; j++){
                scanf("%d",&matrizB[i][j]);
            }
        }
  int matrizC[l2][c2]; 

        if(c1 == c2 && l2 == l1){
                for(i = 0; i < l1; i++){
                        for(j = 0; j < c1; j++){
                         matrizC[i][j] = matrizA[i][j] + matrizB[i][j]; 
                        }
                    }

                for(i = 0; i < l1; i++){
                        for(j = 0; j < c1; j++){
                         printf("%d ",matrizC[i][j]); 
                        }
                         printf("\n");
                    }
        }

        else{
            printf("impossivel");
        }
    
    return 0;
}