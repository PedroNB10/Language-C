#include <stdio.h>

int main ()
{
    int i,j,estaEmB = 0;
    int vetorA[8];
    int vetorB[8];


     for (i = 0; i< 8; i++){
    scanf("%d",&vetorA[i]);

   }

    for (j = 0; j< 8; j++){
    scanf("%d",&vetorB[j]);
   }

   //soma 

   for (i = 0; i< 8; i++){

    printf("%d ",vetorA[i] + vetorB[i]);  

   }

   printf("\n");

   //multiplicacao

   for (i = 0; i< 8; i++){

    printf("%d ",vetorA[i] * vetorB[i]);  

   }

      printf("\n");

   //interseccao

  for (i = 0; i< 8; i++){

       for (j = 0; j< 8; j++){

        if(vetorA[i] == vetorB[j]){
            printf("%d ",vetorA[i]);
        }

    }
  }

    //Diferenca de conjuntos

       printf("\n");

        for (i = 0; i< 8; i++){
            estaEmB = 0;
            for (j = 0; j< 8; j++){

                if(vetorA[i] == vetorB[j]){
                   estaEmB = 1;
                   break;
                }

            }

            if(estaEmB == 0) {
                printf("%d ",vetorA[i]);
            }
   }







    return 0;
  
}