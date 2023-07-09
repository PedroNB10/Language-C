#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct aluno
{
    int matric;
    char nome[50];
}aluno;

int main ()
{
    FILE *arq;
    int x = 2;
    int vet[5] = {11,6,1, 4,21};
    aluno a;

    a.matric = 1010;
    strcpy(a.nome, "Augusto");

    arq = fopen("Arquivo.txt", "wb");

    if (arq == NULL)
    {
        printf("Falha ao abrir arquivo");
        exit(1);
    }

    //se é variavel precisa vir com & antes
    fwrite(&x, sizeof(x),1,arq); //apenas 1 inteiro
    fwrite(&a,sizeof(aluno),1,arq); //apenas 1 elemento de struct
    fwrite(vet,sizeof(int),5,arq);// todos os 5 elementos do vetor


    fclose(arq);

    

    return 0;
}