#include <stdio.h>

int main ()
{
    int num;
    printf("Digite um número:");
    scanf("%d",&num);
    if(num % 3 == 0 && num % 5 != 0){
        printf("divisivel por 3\n");
    }
    else if(num % 5 == 0 && num % 3 != 0){
        printf("divisivel por 5\n");
    }
    else {
        printf("nao divisivel\n");
    }
    return 0;
}