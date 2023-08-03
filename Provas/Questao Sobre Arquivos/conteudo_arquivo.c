#include <stdio.h>
#include <string.h>

typedef struct livro
{
    char titulo[100];
    char autor[100];
    int ano;
} livro;

int main()
{
    livro x;
    FILE *arq = NULL;

    arq = fopen("livros.dat", "rb");
    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Conteúdo do arquivo livros.dat:\n\n");

    while (fread(&x, sizeof(livro), 1, arq) == 1)
    {
        printf("Título: %s\n", x.titulo);
        printf("Autor: %s\n", x.autor);
        printf("Ano: %d\n", x.ano);
        printf("--------------------------\n");
    }

    fclose(arq);

    return 0;
}
