#include <stdio.h>

int main ()
{
    int i,j,divisores = 0;
    int vetorA[8];



     for (i = 0; i< 8; i++){
    scanf("%d",&vetorA[i]);

   }

   for (i = 0; i< 8; i++){
        divisores = 0;
        for(j = 1; j <= vetorA[i]; j++){
            if(vetorA[i] % j == 0){
                divisores++;
            }
        }

        if(divisores == 2){
            printf("%d ",vetorA[i]);
        }
   }





    return 0;
  
}