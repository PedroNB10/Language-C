#include <stdio.h>


int main (){
    char frase[30];
    
    
    scanf("%3[^\n]",frase);

    printf("frase digitada: %s\n",frase);
    
    return 0;
}