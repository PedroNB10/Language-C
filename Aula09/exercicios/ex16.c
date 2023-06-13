#include <stdio.h>
#include <ctype.h>



int main() {

    char string[50];
    int i = 0;
    scanf("%[^\n]",string);

 if(islower(string[i]) && i == 0){
            string[i] = toupper(string[i]);
        }

    while(string[i] != '\0'){
       
   if(string[i] == ' ' && string[i+1] != ' ' && string[i-1] != ' ' ){
            string[i+1] = toupper(string[i+1]);
        }

        i++;
    }

    printf("%s\n",string);


  

    return 0;
}
