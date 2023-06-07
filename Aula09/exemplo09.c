#include <stdio.h>
//argc: c (count) ==> quantidade de argumentos
//argv: v (values) ==> valores dos args é uma matriz argc linhas 
// na posicao zero tem o nome do programa


//matriz com argc linhas==>
// o sistema ajusta as colunas com base no numero de caracteres digitada

// 0 ./executavel \0
// 1 valor1  \0
// 2 simbolo \0
// 3 valor2 \0



// ./ output 7 + 2
int main(int argc, char * argv[]){
   
    int x, y;

    char c;

    sscanf(argv[1], "%d",&x); //op
    c = argv[2][0];
    sscanf(argv[3], "%d",&y); //simb
    
    switch(c){
        case '+':
            printf("%d\n", x + y);
            break;
        case '-':
            printf("%d\n", x - y);
            break;
        case 'x':
            printf("%d\n", x * y);
            break;
            

    }




    return 0;
}