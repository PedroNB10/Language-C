#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#define TAM 80
int main ()
{
    char *frase = (char *) malloc(80 * sizeof(char)),
         *fraseInvertida = (char *) malloc(80 * sizeof(char));

    int i = 0,j;


    scanf(" %[^\n]", frase);
    j = 0;


    for(i = strlen(frase) - 1; i >= 0; i--){
        if(islower(*(frase + i)))
        {
             *(fraseInvertida + j) = toupper(*(frase + i));
        }
        else
        {
             *((fraseInvertida + j)) = *(frase + i);
        } 
        j++;
    }


    printf("%s\n\n", fraseInvertida);

    printf("Printando endereços:\n");

    for(i = 0; i < strlen(frase); i++){
        printf("%p =  %p ?\n", frase + i, fraseInvertida + i);
    }


    printf("\n");


  
    free(fraseInvertida);
    free(frase);
   
    return 0;
}