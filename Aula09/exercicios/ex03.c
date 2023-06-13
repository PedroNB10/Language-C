#include <stdio.h>
#include <string.h>

int main (){
    char frase[50];
    int i;
    int contador = 0;
    
    scanf("%[^\n]",frase);
    
    for(i = 0; i < strlen(frase); i++ ){
 

        if(frase[i] == ' '){
               contador++;
        }



    }
    
    printf("%d\n",contador);
    
    return 0;
}