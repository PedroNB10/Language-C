#include <stdio.h>

#define N 8 //nao ocupa memória

int main (){

    float notas[N],soma = 0,media;
    int i; //variavel do for(SEMPRE INT)
    

    for(i = 0; i < N; i++ ){
        printf("Digite a nota da posicao %d: ",i);


        scanf("%f",&notas[i]);
        soma = soma + notas[i];
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