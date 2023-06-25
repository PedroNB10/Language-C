#include <stdio.h>




//apontar ==> siginifica atribuir seu valor ao endereco de uma variavel(ou ponteiro) e

// O ponteiro serve:
// Para referenciar uma variável na memória.
// Para passagem de parâmetros por referência à funções (próximas aulas).
// Para realizar alocação dinâmica de memória (próxima aula)
int main (){
    int *ponteiro = NULL; //declaração de ponteiro de 1 dimensão
    int *ponteiro2 = NULL, variavelNormal = 2, a = 2, b = 1;

    //ponteiros SEMPRE precisam ser inicializados
    //Exemplos de inicialização:
    int *exemplo = NULL; //apontando para nada
    int *exemplo2 =  NULL;//apontando para o endereço de uma variável e tendo o mesmo conteudo da variavel

    //formas de apontar:
    ponteiro2 = &variavelNormal;//ponteiro apontando para uma variavel
    ponteiro = &a;//ponteiro apontando para outro ponteiro

    exemplo2 = &a;

    exemplo = &b;
    printf("valor da variavel normal:%d\n\n", variavelNormal);

    printf("endereco da variavel normal: %p\n", &variavelNormal);
    printf("endereco do ponteiro 'ponteiro': %p\n", &ponteiro);
    printf("endereco do ponteiro 'ponteiro2': %p\n", &ponteiro2);
    printf("endereco do ponteiro 'exemplo2': %p\n\n",&exemplo2);

    // *exemplo = 95;
    // *ponteiro2 = 10;
    printf("valor da variavel normal:%d\n", variavelNormal);
    printf("endereco que o  ponteiro 'exemplo' aponta: %p\n", exemplo);
    printf("endereco que o  ponteiro 'exemplo2' aponta: %p\n", exemplo2);
    printf("endereco que o  ponteiro 'ponteiro' aponta: %p\n", ponteiro);
    printf("endereco que o  ponteiro 'ponteiro2' aponta: %p\n\n", ponteiro2);

    //*ponteiro = 104;

    printf("valor da variavel variavelNormal: %d\n",variavelNormal);
    printf("Valor que o ponteiro 'exemplo' aponta: %d\n",*exemplo);
    printf("Valor que o ponteiro 'exemplo2' aponta: %d\n",*exemplo2);
    printf("Valor que o ponteiro 'ponteiro' aponta: %d\n",*ponteiro);
    printf("Valor que o ponteiro 'ponteiro2' aponta: %d\n",*ponteiro2);



    if(*ponteiro == *ponteiro2){
        printf("\nOs ponteiros conteudo(valor apontado). IGUAL\n");
    }
    else{
        printf("\nOs ponteiros tem  conteudo(valor apontado) DIFERENTES.\n");
    }   

    if(ponteiro == ponteiro2){

        printf("\nOs ponteiros apontam para enderecos iguais \n");
    }else{
        printf("\nOs ponteiros apontam para enderecos diferentes\n");
    }

    if(&ponteiro != &ponteiro2){
        printf("\nOs ponteiros tem enderecos diferentes!!! \n");
    }
 
    return 0;
}