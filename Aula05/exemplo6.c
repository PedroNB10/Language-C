#include <stdio.h>

int main ()
{
    float temp_agua;

    printf("Qual a temperatura da agua?");
    scanf("%f",&temp_agua);

    if(temp_agua < 0 ){
        printf(" Eh solido \n");
    }

    else if(temp_agua > 100){
            printf("Eh Gasoso \n");
        }
        
        else{
            printf("Eh Liquido \n");
        }
    

}