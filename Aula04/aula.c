#include <stdio.h>
#include <stdlib.h> //rand() e srand()
#include <time.h> // time passed

int main () 
{
    //char simb;


    // printf("Entre com um caractere: \n");
    // scanf("%c",&simb);
    // printf("Simbolo digitado %c \n",simb);

 //   char c1 = '5';
    // printf("Entre com um caractere: \n");
    // scanf("%c",&simb);
    // printf("Simbolo digitado %c \n",simb);
    // char c2 = '6';

    // char c3 = 101;

    // printf("%c", c3);

    int num; 
    srand(time(NULL));
    num = 10 + rand()%91;  // 10 a 100
    num = -5 + rand()%16;  // -5 a 10 
    
    // o resto de uma divisao por 100 sempre sera entre 0 e 99, por isso usamos resto de divisao por 101

    printf("%d \n",num);


    return 0;
}