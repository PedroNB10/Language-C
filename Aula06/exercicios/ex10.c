#include <stdio.h>

int main (){
    int n, soma=0,i;
    
   do{
       scanf("%d",&n);
       
   }while(n<0);
    
    
    
    for (i=1; i<=n; i++){
        if(n % i == 0){
              soma = soma + i;
        }
      
    }
    
    printf("%d",soma);
    return 0;
}