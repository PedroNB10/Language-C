#include <stdio.h>
#define TAM 5
typedef struct studentData {

    char name[50];
    char numberRegistration[50];
    char course[100];

}studentData;



int main (){
    studentData students[TAM];
    int i;

    for(i = 0; i < TAM; i++){

        scanf(" %[^\n] %[^\n] %[^\n]", students[i].name,students[i].numberRegistration,students[i].course);

    }

      for(i = 0; i < TAM; i++){

        printf("Aluno %d:\nNome: %s\nMatricula: %s\nCurso: %s\n\n",i+1, students[i].name,students[i].numberRegistration,students[i].course);

    }

    return 0;
}