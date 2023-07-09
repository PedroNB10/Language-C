#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct aluno
{
    int matric;
    char nome[50];
}aluno;

int main ()
{//precisa saber a ordem que está um arquivo para realizar a leitura
    FILE *arq;
    int x, i; //2, i serve para percorrer o vetor
    int vet[5]; //= {11,6,1, 4,21};
    aluno a;

    //a.matric = 1010;
    strcpy(a.nome, "Augusto");

    arq = fopen("Arquivo.txt", "rb");

    if (arq == NULL)
    {
        printf("Falha ao abrir arquivo");
        exit(1);
    }

    // tem q fazer a leitura na mesma ordem da escrita
  fread(&x, sizeof(int), 1, arq);
  fread(&a, sizeof(aluno), 1, arq);
  fread(vet, sizeof(int), 5, arq);

  printf("X = %d\n", x);
  printf("Aluno(matricula,nome) %d %s\n",a.matric,a.nome);
  printf("Vetor:\n");
  
  for(i = 0; i < 5; i++)
  {
    printf("%d\n", vet[i]);
  }


    fclose(arq);

    

    return 0;
}