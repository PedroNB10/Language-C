#include <stdio.h>

int main (){
    
    int a,b,i,soma = 0,produto = 1;
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    for (i = a; i <= b; i++){
        if(i % 2 == 0){
           soma = soma + i;
        }
        
        else{
            produto = produto * i;
        }
    }
    
    printf("%d %d",soma,produto);
   
    

    return 0;
}