#include <stdio.h>

int main (){

    int n,divs,i;

    do{
        scanf("%d",&n);
    }while(n < 0);
    
    
    for (i=1; i <= n; i++ ){
        
        if(n % i == 0){
            printf("%d ",i);
        }
    }
    
    return 0;
}