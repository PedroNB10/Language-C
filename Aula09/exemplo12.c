#include <stdio.h>
#include <string.h>

int main (){
    //strlen: tamanho da string
    char a[50] = "UNIFEI";
    int tam, i;

    tam = strlen(a);// nao conta \0 caso for entrada de scanf
    printf("Tamanho = %d\n", tam);

    for(i = 0; i < tam; i++){
        printf("%c",a[i]);
    }
    printf("\n");

    //strcnp: compara duas strings
    // se forem iguais, retorna 0

    char s1[20] = "UNIFEI";
    char s2[20] = "Unifei";

    if(strcmp(s1,a) == 0){
        printf("sao iguais\n");
    }
   else{
        printf("sao diferentes\n");
    }

    //strcpy: copia uma string em outra

    char t1[30] = "Unifei";
    char t2[30];

    //t2 = t1 NAO FUNCIONA

    strcpy(t2,t1); //destino, origem
    printf("Copia = %s\n", t2);
    
    //strcat: concatena strings
    char q1[50] = "Universidade";
    char q2[20] = "Federal";
    char q3[20] = "de";
    char q4[20] = "Itajuba";

    strcat(q1," ");//destino, origem
    strcat(q1,q2);
    strcat(q1," ");
    strcat(q1,q3);
    strcat(q1," ");
    strcat(q1,q4);
    strcat(q1," ");

    printf("Concatenacao: %s\n",q1);
    return 0;
}