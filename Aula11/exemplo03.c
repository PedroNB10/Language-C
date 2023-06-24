#include <stdio.h>

int main () {

    int a = 2;
    int *x = NULL; // ponteiro inicializa nulo

    x = &a; // ponteiro aponta para a(endereco de a)
    //

    printf("Endereco de A: \t %p \n", &a);//endereco de memoria
    printf("X aponta para: \t %p \n", x);//endereco de memoria
    printf("Endereco de X: \t %p \n", &x); //endereco de memoria
    printf("Conteudo de X:\t %d \n", *x); //conteudo de quem aponta

    printf("Valor de A: \t %d\n", a);
    *x = 7; //altera o valor de a
    printf("Valor de A: \t %d\n", a);

    return 0;
}