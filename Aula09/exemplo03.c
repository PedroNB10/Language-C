#include <stdio.h>
#define TAM 6

int main (){

    int vetA[TAM], vetB[TAM], ia,ib;
    


    for (ia = 0; ia < TAM ; ia++){
        scanf("%d",&vetA[ia]);
    }  

      for (ib = 0; ib < TAM ; ib++){
        scanf("%d",&vetB[ib]);
    }  

    for (ia = 0 ; ia < TAM; ia++){

        for (ib = 0 ; ib < TAM; ib++)
        {
           if(vetA[ia] == vetB[ib]){
            printf("%d ",vetA[ia]);
           }
        }
        
    }

    return 0;

}