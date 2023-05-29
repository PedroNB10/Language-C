#include <stdio.h>

int main(){
    int vetor[5],n;
    int posicao = 0,i = 0,divisores = 0;

    do{

        scanf("%d",&n);
        divisores = 0;
        for(i = 1; i <= n; i++){
            if(n % i == 0){
                divisores++;
            }

        }
    

        if(divisores == 2){
            vetor[posicao] = n;
            posicao++;
        
        }
       
        
    }while(posicao < 5);

    for(i = 0; i < 5;i++){
        printf("%d ",vetor[i]);
    }

    return 0;
}