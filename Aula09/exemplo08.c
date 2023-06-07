#include <stdio.h>

int main(){
    char a[30], b[30];
    int x,y;

    scanf("%s", a);
    scanf("%s", b);
    //converter a string
    sscanf(a, "%d", &x);// a (string) virou x (int)
    sscanf(b, "%d", &y);
    
    printf("Soma = %d\n", x + y);

 
    return 0;
}