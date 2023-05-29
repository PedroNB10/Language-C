#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(NULL));
    float vetor[8] = {0};
    float menor;
    int i,p1 = 0,p2,p3;


    for(i = 0; i < 8; i++){
        scanf("%f",&vetor[i]);
    }

    menor = vetor[0];
    for(i = 0; i < 8; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
            p1 = i; 
        }
    }

    printf("%f %d\n",menor,p1);

    p2 = 1;
    menor = vetor[p2];
    while (p2 == p1)
    {
        p2 = rand()%8;
        menor = vetor[p2];
        /* code */
    }

     for(i = 0; i < 8; i++){
        if( i != p1 && vetor[i] < menor ){
            menor = vetor[i];
            p2 = i;
        }
    }

      printf("%f %d\n",menor,p2);

    p3 = 2;
    menor = vetor[p3];
    while (p3 == p1 || p3 == p1)
    {
        p3 = rand()%8;
        menor = vetor[p3];

    }

   for(i = 0; i < 8; i++){
        if( i != p1 && i != p2 && vetor[i] < menor ){
            menor = vetor[i];
            p3 = i;
        }
    }

     printf("%f %d\n",menor,p3);

    return 0;
}