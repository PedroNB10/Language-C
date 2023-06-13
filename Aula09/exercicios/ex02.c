#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
    char frase[50];
    int i;
    int contador[5] = { };

    
    scanf("%[^\n]",frase);
    
    for(i = 0; i < strlen(frase); i++ ){
 

                 if(tolower(frase[i])  == 'a'){
                    contador[0]++;
            }
            else if(tolower(frase[i])  == 'e'){
                    contador[1]++;
            }
            else if(tolower(frase[i])  == 'i'){
                    contador[2]++;
            }
            else if(tolower(frase[i])  == 'o'){
                    contador[3]++;
            }
            else if(tolower(frase[i])  == 'u'){
                    contador[4]++;
            }
    
    }
    
    printf("A = %d\nE = %d\nI = %d\nO = %d\nU = %d\n",contador[0],contador[1],contador[2],contador[3],contador[4]);
    
    return 0;
}