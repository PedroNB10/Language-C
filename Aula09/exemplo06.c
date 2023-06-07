#include <stdio.h>
#include <ctype.h> //serve para contar qualquer tipo de espaçamento: \n, \t, \v \f
//comandos da ctype
//  ==> isspace(a[i])
// ==> isalpha() letra ou numero 
// ==> isdigit()


int main (){
    char a[40];
    int i;
    int cont = 0;
    
    scanf("%[^\n]", a);


    i = 0;
    while (a[i] != '\0')
    {
        // if(a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u')
        // printf("%c",a[i]);

        if(a[i] == ' '){
            cont++;
        }
       
        i++;
    }

    printf("qtd de espacos %d",cont);
    printf("\n");
    

    
    return 0;
}