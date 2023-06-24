#include <stdio.h>

typedef struct aluno
{
    char nome[50];
    int matricula;
    int dia,mes,ano;
    float iea;
}aluno;

int main(){
   
    // printf("%d,\n", sizeof(int));
    // printf("%d,\n", sizeof(long int));
    // printf("%d,\n", sizeof(long long int));
    // printf("%d,\n", sizeof(float));
    // printf("%d,\n", sizeof(double));
   // sizeof()// serve para ver o tamanho em bytes de um dado

   printf("%d, \n", sizeof(aluno));

   //void* (unsigned int)  
    return 0;
}