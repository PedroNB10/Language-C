#include <stdio.h>
#include <ctype.h>

int main (){
    
    char c = 'A', d = 'a';
    char s[20]= "Universidade Federal";
    int i;

    printf("%d\n",isupper(c));// se retornar valores diferentes de 0 vai ser verdadeiro caso contrario é falso

   i = 0; 

   while(s[i] != '\0'){
        s[i] = toupper(s[i]);
        i++;
   }

    printf("%s\n", s);
    return 0;
}