#include <stdio.h>
#define TAM 10

int main (){

    int vet[TAM], i;
    int maior,idx;


    for (i = 0; i < TAM ; i++){
        scanf("%d",&vet[i]);
       
    }  

 maior = vet[0];
 idx = 0;

   for (i = 0; i < TAM ; i++){
       if(vet[i] > maior){
            maior = vet[i];
            idx = i;
        }
    }

printf("Maior valor: %d do indice [%d] \n",maior,i);
     

   
}