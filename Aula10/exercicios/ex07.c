#include <stdio.h>
#include <string.h>

#define TAM 8

typedef struct bookData
{
    char name[80];
    char author[100];
    int year;
} bookData;

int main()
{
    bookData books[TAM];
    int i;
    char answer[100];

    for (i = 0; i < TAM; i++)
    {
        scanf(" %[^\n] %[^\n] %d", books[i].name, books[i].author, &books[i].year);
    }

    do
    {
        scanf(" %[^\n]", answer);

        if(strcmp(answer,"sair") != 0) printf("Livros de %s:\n",answer);

        for (i = 0; i < TAM; i++)
        {
            
            if(strcmp(books[i].author,answer) == 0){
                printf("%s (%d)\n",books[i].name,books[i].year);
            }
        }
        printf("\n");

    } while (strcmp(answer,"sair") != 0);

    return 0;
}