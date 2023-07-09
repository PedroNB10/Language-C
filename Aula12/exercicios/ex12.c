#include <stdio.h>
#include <string.h>

int afimb(char *a, char *b);

int main ()
{

printf("%d", afimb("ra", "arara") );
    return 0;
}

int afimb(char *a, char *b)
{

    int tamanhoA = strlen(a);
    int tamanhoB = strlen(b);
    char stringCompare[strlen(b)];
    int i = tamanhoB - tamanhoA;
    int j = 0;

    while(b[i] != '\0')
    {   
        stringCompare[j] = b[i];
        j++;
        i++;
    }
    stringCompare[j] = '\0';

    if(strcmp(stringCompare,a) == 0){
        return 1;
    }
    else{
        return 0;
    }

}