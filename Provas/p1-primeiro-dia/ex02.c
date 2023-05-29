#include <stdio.h>

int main(){
    
    //numerador: 1, -1,  1,  -1, 1, -1, 1
    //denominador: 3², 5², 7²
    int n,sinal = 1,i;
    float numerador = 1, denominador = 1,soma = 0;
        

    
    do {
        scanf("%d", &n);
    }while(n <= 0);    

        
    for(i = 0; i < n; i++){
      
        soma = soma + (numerador*(sinal))/(denominador*denominador);
        sinal = -sinal;
        denominador = denominador + 2;

      
    }

        printf("%.4f",soma);
    
    return 0;
}


