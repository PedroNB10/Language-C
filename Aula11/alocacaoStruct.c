#include <stdio.h>
#include <stdlib.h>

#define TAM 2
typedef struct cadastro {

    char nome[50];
    char cidade[50];
    int idade;


}cadastro;

int main ()
{
    int i;
    cadastro *pessoa = (cadastro*) malloc(TAM * sizeof(cadastro)); // será o array de struct
    cadastro *ultimaPessoa = (cadastro*) malloc(TAM * sizeof(cadastro));// será uma única struct

    //para alocar em um array de struct:
    for(i = 0; i < TAM; i++)
    {
        scanf(" %[^\n] %[^\n] %d",pessoa[i].nome,pessoa[i].cidade, &pessoa[i].idade);
    }
      
     //para alocar uma única struct:
     scanf(" %[^\n] %[^\n] %d",ultimaPessoa->nome,ultimaPessoa->cidade, &ultimaPessoa->idade);

    printf("Nome: %s Cidade:%s Idade:%d\n",ultimaPessoa->nome,ultimaPessoa->cidade, ultimaPessoa->idade);
     

    free(pessoa);


    return 0;
}