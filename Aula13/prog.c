#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f = NULL;//criou ponteiro inicia com NULL
    int idade;
    char msg[100];

    f = fopen("meuArquivo.txt", "r"); //(nome do arquivo, modo de abertura)
    // para encontrar o arquivo em uma pasta específica é preciso passar o diretório C: ....././../

    fscanf(f, " %[^\t]",msg); // lê até encontrar o \t
    fscanf(f, " %d",&idade);
    
    if(f == NULL)
    {
        printf("Falha ao abrir arquivo...\n");
        exit(1); //pertence a lib stdlib
    }
    //fprintf(arquivo,"expressao", Argumentos ); serve para escrever no arquivo 
    
    printf("Msg: %s\nIdade:%d", msg, idade);


    fclose(f);



    return 0;
}