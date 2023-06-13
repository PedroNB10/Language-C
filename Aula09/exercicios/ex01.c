#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (){
    char frase[50];
    int i,contador = 0;
    
    scanf("%[^\n]",frase);
    
    for(i = 0; i < strlen(frase); i++ ){
        if(tolower(frase[i])  == 'a' || tolower(frase[i]) == 'e' || tolower(frase[i]) == 'i' || tolower(frase[i]) == 'o' || tolower(frase[i]) == 'u'){
               contador++;
        }
        

    }
    
    printf("%d\n", contador);
    
    return 0;
}