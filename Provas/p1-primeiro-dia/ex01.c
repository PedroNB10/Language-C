#include <stdio.h>

int main (){
    //idiomas, sexo, ensino S ou M;
    //aptos : 2 M M ou 3 F M ou 1 M S ou 2 F S
    
    int id;
    char sex,ens;

    scanf("%d %c %c", &id, &sex, &ens);
    
    if((sex == 'M' && id >= 2 && ens == 'M') || (sex == 'M' && id >= 1 && ens == 'S')){
        printf("sim");
    }

    else if((sex == 'F' && id >= 3 && ens == 'M') || (sex == 'F' && id >= 2 && ens == 'S')){
        printf("sim");
    }

    else{
        printf("nao");
    }
    
    

    
    return 0;
}
