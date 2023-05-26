#include <stdio.h>

int main ()
{
    int n,soma=0;
    float media,cont=0;
    
    do{
       
        scanf("%d",&n);
         if(n>0){
            soma = soma +n;
            cont++;
         }
        
      
        
    }while(n > 0);
    
     
    media = soma / cont;

    printf("%.1f",media);
    
    
    return 0;
}