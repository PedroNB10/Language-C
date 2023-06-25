#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main (){
    int *q = (int *) calloc(TAM, sizeof(int));

    printf("int = %ld bytes \n", sizeof( int ) );

    printf("float = %ld bytes \n", sizeof( float ) );
    printf("double = %ld bytes \n", sizeof( double ) );
    printf("char = %ld bytes \n", sizeof( char ) );
    printf("void = %ld bytes \n", sizeof( void ) );
    printf("short int = %ld bytes \n", sizeof( short int ) );
    printf("long int = %ld bytes \n", sizeof( long int ) );
    printf("long long int = %ld bytes \n", sizeof( long long int ) );
    printf("long double = %ld bytes \n", sizeof( long double ) );
    printf("*void = %ld\n", sizeof(calloc(TAM, sizeof(int))));
    return 0;
}