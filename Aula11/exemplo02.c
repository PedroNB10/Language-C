#include <stdio.h>

int main () {

    int a = 2;
    int *x = NULL,*y = NULL ; // ponteiro inicializa nulo

    x = &a; // ponteiro aponta para a(endereco de a) ==> X recebe o endereco de memoria da variavel a
    y = x; // y aponta para x (que aponta para a) y tmb aponta para a

    printf("Endereco de A: \t %p \n", &a);//endereco de memoria
    printf("X aponta para: \t %p \n", x);//endereco de memoria
    printf("Endereco de X: \t %p \n", &x); //endereco de memoria
     printf("Endereco de Y: \t %p \n", &y);//endereco de y
    printf("Conteudo de X:\t %d \n", *x); //conteudo de quem aponta
    printf("Conteudo de Y:\t %p \n", *y); //conteudo de quem aponta


    

    return 0;
}