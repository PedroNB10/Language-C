#include <stdio.h>

int main (){
    int n,x,i,soma = 0;
    
    do{
         scanf("%d",&n);
         scanf("%d",&x);
    }while(n < 0 || x < 0);
    
   
   for (i=1; x*i < n; i++){
       
       soma = soma + x * i;
   }
    printf("%d",soma);
    
    return 0;
}