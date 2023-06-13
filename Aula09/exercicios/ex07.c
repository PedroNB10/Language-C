#include <stdio.h>
#include <string.h>

int main (){

    char phrase1[60];
    char phrase2[60];
    int arraySize01,arraySize02;

    scanf("%[^\n] %[^\n]",phrase1,phrase2);
     arraySize01 = strlen(phrase1);
     arraySize02 = strlen(phrase2);



    if(arraySize01 > arraySize02){
            printf("A frase 1 possui %d caracteres a mais que a frase 2.\n",arraySize01 - arraySize02);
    }
    else{
         printf("A frase 1 possui %d caracteres a menos que a frase 2.\n",arraySize02 - arraySize01);
    }

 

    return 0;
}