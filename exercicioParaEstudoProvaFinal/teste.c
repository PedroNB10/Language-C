#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

typedef struct dataStudents{

    char name[80];
    int age;
}dataStudents;


void sortByAge(dataStudents * students, int N);
void sortByAlphabet(dataStudents * students, int N);

int main ()
{
    FILE * studentsDataCreated = fopen("estudantesCadastrados.txt", "w");
    FILE * olderStudents = fopen("estudantesAntigos.txt", "r");



    int N;
    int i;

    printf("Digite o número de alunos: ");
    scanf(" %d",&N);

    dataStudents * students = malloc(N * sizeof(dataStudents));

    for(i = 0; i < N; i++)
    {
        scanf(" %s",students[i].name);
        scanf(" %d", &students[i].age);
    }

    printf("\nOrdem Inicial dos estudantes:\n");


    for(i = 0; i < N; i++)
    {
        printf("Nome: %s Idade:%d\n", students[i].name, (students[i].age));
        fprintf(studentsDataCreated,"%s\t%d\n", students[i].name, (students[i].age));
    }


    printf("\nOrdem do mais novo para o mais velho:\n");
    sortByAge(students, N);

    for(i = 0; i < N; i++)
    {
        printf("Nome:%s Idade:%d\n", students[i].name, (students[i].age));
    }

    fclose(studentsDataCreated);

    printf("\nOrdem alfabética dos nomes:\n");
    sortByAlphabet(students,N);

    for(i = 0; i < N; i++)
    {
        printf("Nome: %s Idade:%d\n", students[i].name, (students[i].age));
    }

    printf("\nLeitura do arquivo com estudantes antigos:\n");

    i = 0;
    int ageRead;
    char nameRead[80];

    fscanf(olderStudents, "%s\t%d\n",nameRead, &ageRead);

    while(!feof(olderStudents)){
        printf("Nome:%s Idade:%d\n",nameRead, ageRead);
        fscanf(olderStudents, "%s\t%d",nameRead, &ageRead);
    }

    free(students);

    
    return 0;
}


void sortByAge(dataStudents * students, int N){

    int i,j,temporaryAge;

    char temporaryName[80];

    for(i = 0; i < N; i++){
        for(j = 0;j < N -i -1; j++)
        {
            if(students[j].age > students[j+1].age){
 
                temporaryAge = students[j].age;
                strcpy(temporaryName,students[j].name);


                students[j].age = students[j+1].age;
                strcpy(students[j].name,students[j+1].name);


                students[j+1].age = temporaryAge;
                strcpy(students[j+1].name,temporaryName);

            }
        }
    }
}


void sortByAlphabet(dataStudents * students, int N){

    int i,j,temporaryAge;
    char temporaryName[80];

    for(i = 0; i < N -1; i++){
        for(j = 0; j < N -i -1; j++)
        {
            if(strcmp(students[j].name,students[j + 1].name) > 0){
                
                temporaryAge = students[j].age;
                strcpy(temporaryName,students[j].name);


                students[j].age = students[j+1].age;
                strcpy(students[j].name,students[j+1].name);


                students[j+1].age = temporaryAge;
                strcpy(students[j+1].name,temporaryName);

            }

        }
    }


}