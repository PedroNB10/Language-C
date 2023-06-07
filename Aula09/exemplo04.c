#include <stdio.h>


int main (){
    char a[10], b[10];
    int i;
    
    scanf(" %[^\n]", a);


    i = 0;
    while (a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }

    b[i] = '\0';
    

    printf("%s",b);
    
    return 0;
}