#include <stdio.h>

#define LIN 5
#define COL 4


int main () {
                      // LINHA 0    LINHA 1
    float m[LIN][COL];
    int i,j;

    //maneira mais eficiente 


//Esse jeito é melhor porque ele executa menos operações condicionais

for (i = 0; i< LIN ; i++){ // anda pelas linhas
      
        printf("digite a matricula do aluno %d:", i);
        scanf("%f",&m[i][0]);
        printf("digite a n1 do aluno %d:", i);
        scanf("%f",&m[i][1]);
        printf("digite a n2 do aluno %d:", i);
        scanf("%f",&m[i][2]);
       
       m[i][3] = (m[i][1] + m[i][2]) / 2.0;

       
    }

//imprime a matriz

    for (i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("%6f  ",m[i][j]);
        }
        printf("\n"); 
    }


    return 0;
}