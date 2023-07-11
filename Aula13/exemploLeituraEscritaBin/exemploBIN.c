#include <stdio.h>
#include <string.h>

typedef struct aluno{
    int matricula;
    char nome[30];
}aluno;



int main ()
{
    FILE *arq = fopen("alunos.bin", "wb");

    aluno a;

    a.matricula = 1234;
    strcpy(a.nome, "Ana");
    //escrita
    fwrite(&a,sizeof(aluno), 1, arq);

    a.matricula = 3456;
    strcpy(a.nome, "Lia");
    //escrita
    fwrite(&a,sizeof(aluno), 1, arq);

    a.matricula = 2489;
    strcpy(a.nome, "Zeca");
    //escrita
    fwrite(&a,sizeof(aluno), 1, arq);

    fclose(arq);

    //leitura
    arq = fopen("alunos.bin","rb");

    // 0 é o primeiro registro
    // 1 é o segundo registro
    fseek(arq, 0* sizeof(aluno),SEEK_SET);

    fread(&a,sizeof(aluno),1,arq);
    printf("Aluno: %s (%d)\n", a.nome, a.matricula);
    fclose(arq);



    return 0;
}