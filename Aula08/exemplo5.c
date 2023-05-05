#include <stdio.h>

#define TAM 8

int main (){
    int v[TAM];
    int i;

    for (i = 0; i < TAM; i ++ ){
        scanf("%d",&v[i]);
        if (v[i] % 2 ==0){
            printf("v[%d] = %d \n",i,v[i]);
        }
    }
    return 0;
}