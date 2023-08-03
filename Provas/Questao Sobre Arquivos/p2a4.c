#include <stdio.h>
#include <string.h>

typedef struct livro
{
    char titulo[100];
    char autor[100];
    int ano;
}livro;

int main()
{
    livro x;
    char aut[100];
    FILE *arq = NULL;

    scanf(" %[^\n]", aut);

    while( strcmp(aut, "sair") != 0 )
    {
        printf("Livros de %s:\n", aut);
        arq = fopen("livros.dat", "rb");

        fread(&x, sizeof(livro), 1, arq);

        while(!feof(arq))
        {
            if(strcmp(x.autor, aut) == 0)
            {
                printf("%s\n", x.titulo);
            }

            fread(&x, sizeof(livro), 1, arq);
        }

        fclose(arq);
        printf("\n");

        scanf(" %[^\n]", aut);
    }

    return 0;
}
