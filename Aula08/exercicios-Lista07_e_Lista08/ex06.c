#include <stdio.h>

int main ()
{
   int vetor[10],i,n;

   for (i = 0; i< 10; i++){
    scanf("%d",&vetor[i]);

   }

   scanf("%d",&n);

   for (i = 0; i< 10; i++){
        if(vetor[i] % n == 0){
           printf("%d ",vetor[i]);
        }

   }




    return 0;
}