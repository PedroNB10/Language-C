#include <stdio.h>
#include <string.h>
#define TAM 5
typedef struct studentData
{

    char numberRegistration[50];
    char name[50];
    double p1, p2, p3;

} studentData;

int main()
{
    studentData students[TAM];
    int i,idxHigherScore = -1,idxHigherAvarege = -1;
    int passed[TAM];
    char situation[20];
    double higherScoreTestp1,biggestAverage,avarage;

    for (i = 0; i < TAM; i++)
    {

        scanf(" %[^\n] %[^\n] %lf %lf %lf", students[i].numberRegistration, students[i].name, &students[i].p1, &students[i].p2, &students[i].p3);
    }

    higherScoreTestp1 = students[0].p1;
    biggestAverage = (students[0].p1 + students[0].p2 + students[0].p3)/3;
    for (i = 0; i < TAM; i++)
    {
        avarage = (students[i].p1 + students[i].p2 + students[i].p3)/3;
        
        if(avarage >= 6){
            passed[i] = 1;
        }
        else {
            passed[i] = 0;
        }

        if(students[i].p1 > higherScoreTestp1){
            higherScoreTestp1 = students[i].p1;
            idxHigherScore = i;
        }
        if(avarage > biggestAverage){
            biggestAverage = avarage;
            idxHigherAvarege = i;
        }
    }

    printf("Maior nota na P1: %.2lf\n%s\n\n",students[idxHigherScore].p1,students[idxHigherScore].name);

    printf("Maior media: %s\nValor: %.2lf\n\n",students[idxHigherAvarege].name,biggestAverage);

    for(i = 0; i < TAM; i++){
        strcpy(situation, "Aprovado");
        if(passed[i] == 0){
            strcpy(situation, "Reprovado");
        }
    printf("%s %s %s\n",students[i].numberRegistration,students[i].name, situation);



    }






    return 0;
}