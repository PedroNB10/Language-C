#include <stdio.h>

int main ()
{
    int i,j,contador=0;
    int vetorA[15];
    int vetorB[15];


     for (i = 0; i< 15; i++){
    scanf("%d",&vetorA[i]);

   }

    for (j = 0; j< 15; j++){
    scanf("%d",&vetorB[j]);
   }

   for (i = 0; i< 15; i++){
        for (j = 0; j< 15; j++){
           if(vetorA[i] == vetorB[j]){
                contador++;
           }
        }

   }

    printf("%d",contador);




    return 0;
}