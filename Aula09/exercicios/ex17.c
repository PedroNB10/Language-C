#include <stdio.h>
#include <ctype.h>



int main() {

    char string[50];
    int i = 0,upper = 0,lower = 0;
    scanf("%[^\n]",string);


    while(string[i] != '\0'){
        if(string[i] != ' ' && isupper(string[i])){
            upper++;
        }

        if(string[i] != ' ' && islower(string[i])){
           lower++;
        }
    i++;
    }


    printf("%d %d\n",lower,upper);


  

    return 0;
}
