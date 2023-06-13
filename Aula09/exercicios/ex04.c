#include <stdio.h>
#include <string.h>

int main (){
    char frase1[50];
    int i;
 
   
    scanf("%[^\n]",frase1);
   
    i = strlen(frase1)-1;

    
    while(i < strlen(frase1)){
      
        printf("%c",frase1[i]);
          i--;
     
    }


    printf("\n");
    

    
    return 0;
}