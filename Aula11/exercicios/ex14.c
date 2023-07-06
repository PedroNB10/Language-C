#include <stdio.h> 
#include <stdlib.h>


typedef struct studentData{
    char registration[80];
    char name[80];
    int birthDay;
    int birthMonth;
    int birthYear;
    
}studentData;

int main ()
{   
    studentData *vetStudents = NULL;
    studentData OldestStudent, newestStudent;
    studentData *i = NULL;
    int N;

    
    scanf(" %d", &N);
    vetStudents = (studentData *)  malloc(N * sizeof(studentData));

    if(!vetStudents){
        printf("Memoria insuficiente\n");
        exit(1);
    }
    
    for(i = vetStudents; i < vetStudents +  N; i++)
    {
        printf("Nome: ");
        scanf(" %[^\n]", i->name);
        printf("Registro: ");
        scanf(" %[^\n]", i->registration);
        printf("Dia de nascimento:");
        scanf(" %d",&(i->birthDay));
        printf("Mês de nascimento:");
        scanf(" %d",&(i->birthMonth));
        printf("Ano de nascimento:");
        scanf(" %d", &(i->birthYear));

    }

    OldestStudent = vetStudents[0];
    newestStudent = vetStudents[0];

   for(i = vetStudents; i < vetStudents +  N; i++)
    {
            if(i->birthYear < OldestStudent.birthYear ||
              (i->birthYear <= i->birthYear && i->birthMonth < OldestStudent.birthMonth)||
              (i->birthYear <= i->birthYear && i->birthMonth <= OldestStudent.birthMonth && i->birthDay < OldestStudent.birthDay)){
                        OldestStudent = *i;
            }

            if(i->birthYear > newestStudent.birthYear ||
              (i->birthYear >= newestStudent.birthYear && i->birthMonth > newestStudent.birthMonth)||
              (i->birthYear >= newestStudent.birthYear && i->birthMonth >= newestStudent.birthMonth && i->birthDay > newestStudent.birthDay)){
                        newestStudent = *i;
            }
            
    }



    printf("O mais velho é o %s\n", OldestStudent.name);
    printf("O mais novo é o %s\n", newestStudent.name);

    

    free(vetStudents);
    return 0;
    }
