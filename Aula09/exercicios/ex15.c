#include <stdio.h>
#include <stdlib.h>


int main() {

    char string[50];
    int i = 0,count = 1;
    scanf("%[^\n]",string);

    while(string[i] != '\0'){
        if(string[i] == ' '){
            count++;
        }
        i++;
    }

    printf("%d\n",count);


  

    return 0;
}
