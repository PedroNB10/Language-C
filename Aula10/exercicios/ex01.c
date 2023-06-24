#include <stdio.h>

typedef struct person{

    char name[50];
    int age;
    char street[100];
    int number;
}person;



int main (){
    person p1;
    scanf("%[^\n] %d %[^\n] %d",p1.name, &p1.age, p1.street,&p1.number);
    printf("Nome: %s\nIdade: %d\nEndereco: %s, %d\n", p1.name, p1.age, p1.street, p1.number);
    return 0;
}