#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define N 100 //nao ocupa memória

int main (){

    float notas[N],soma = 0,media;
    int i; //variavel do for(SEMPRE INT)
    srand(time(NULL));

    for(i = 0; i < N; i++ ){
        notas[i] = rand() % 11;
        soma = soma + notas[i];
 //       printf("N%d = %f \n",i,notas[i]);
    }

    media = soma/N;

     for(i = 0; i < N; i++ ){
       if(notas[i]> media) {
        printf("N%d = %f \n",i,notas[i]);
        }
    } 





   // printf("%f",&notas[]);

    return 0;
}