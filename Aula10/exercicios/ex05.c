#include <stdio.h>
#define TAM 5


typedef struct peopleData{
    char name[100];
    char number[100];

}peopleData;


void teste(){
    
}

int main (){
    peopleData person[TAM];

    char alfabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                         
    int i = 0,j = 0;


    for(j = 0; j < TAM; j++){
        scanf(" %[^\n] %[^\n]",person[j].name,person[j].number);
    }


    while(alfabet[i]!= '\0'){

       for(j = 0; j < TAM; j++){
        
            if(person[j].name[0] == alfabet[i]){   
                printf("%s %s\n",person[j].name,person[j].number);
            }

        
       }

       i++;

    }

    
    return 0;
}