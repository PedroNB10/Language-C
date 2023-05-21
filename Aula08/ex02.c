#include <stdio.h>

#define LIN 5
#define COL 5

// 0 0 0 0 1 
// 0 0 0 1 0
// 0 0 1 0 0
// 0 1 0 0 0
// 1 0 0 0 0



int main () {
                      // LINHA 0    LINHA 1
    int m[LIN][COL] = { 0 };
    int i,j;

    //maneira mais eficiente 


//Esse jeito é melhor porque ele executa menos operações condicionais

for (i = 0; i< LIN ; i++){ // anda pelas linhas
        m[i][LIN - 1 - i] = 1;
       
    }

    for (i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("%d ",m[i][j]);
        }
        printf("\n"); 
    }



   

    return 0;
}