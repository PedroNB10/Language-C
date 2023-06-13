#include <stdio.h>

int main () {
    // \0 conta como um único caracter em uma string

    char str[5] = {'a','z','u','l','\0'}; // precisa colocar em aspas simples se colocar um caracter de cada vez

    char str[10] = "azul";// nesse caso pode usar aspas duplas

    //especificadores de string : %s ==> palavras sem espacos, 
                                // %[^\n] leia tudo que vier na entrada até encontrar um \n (LEITURA)
                                // %[^caracter especifico] para de ler em um caracter especifico (LEITURA)

// na leitura de string NAO DEVE VIR ACOMPANHADA DO E COMERCIAL(&)

// na saida so usar %s

// scanf("%3[^\n]",frase); limita a quantidade de caracteres que o usuario pode inserir

//IMPRIME CARACTER A CARACTER E PODE CONTAR QUANTOS CARACTERES TEM EM UMA STRING
    // i = 0;
    // while (frase[i] !- 0)
    // {   
    //     printf("%c", frase[i]);
    // }


//Conversao de string para numeros ==> precisa das libs stdio.h e stdlib.h

// maneiras para fazer string para numero
//sscanf();

//atoi(char[]) string to int
//atoll(char[]) string to long long int
//atof(char[]) string to double

// funcoes de manipulacao de caracteres <ctype.h>


// para caracteres nao para string, caso for de string precisa usar for
//islower ret
//isupper
//tolower
//toupper    

//string.h para funções a seguir:
//strlen
//strcmp
//strcpy
//strcat

    return 0;
}