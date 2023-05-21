#include <stdio.h>

int main ()
{
    int i;



    for (i =1; i<=10; i++){
        

        if(i == 5){
            break; // sai do loop
        //    continue; // pula a execucao do numero 5 e vai para o proximo numero
        }
        printf("%d ",i);
    }

    printf("\n");
    return 0;
}