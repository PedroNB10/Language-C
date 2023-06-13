#include <stdio.h>
#include <string.h>



int main() {

    char phrase01[50],phrase02[50];

    scanf("%s %s",phrase01,phrase02);

    phrase01[strlen(phrase01)] = ' ';

    strcat(phrase01,phrase02);

    printf("%s\n",phrase01);

    return 0;
}
