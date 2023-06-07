#include <stdio.h>


int main (){
    char a[40];
    int i;
    
    scanf("%[^\n]", a);


    i = 0;
    while (a[i] != '\0')
    {
        if(a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u')
        printf("%c",a[i]);
       
        i++;
    }

 printf("\n");
    

    
    return 0;
}