#include <stdio.h>
#include <string.h>



int main() {

    char phrase01[60];
    int i = 0,count = 0,deleteLetters = 0,diferents = 0;

    scanf("%s",phrase01);

    while(phrase01[i] != '\0'){

        if(phrase01[i] == 'a'){
            count++;
        }

        i++;
        
    }



     if(count > strlen(phrase01) - count){
            printf("%ld\n",strlen(phrase01));
        }
        else{
            i =0;
            //( strlen(phrase01) -count) ==> letras diferentes de a
            diferents =  strlen(phrase01) -count;
           while(phrase01[i] != '\0' && diferents - deleteLetters >= count ){
                if(phrase01[i] != 'a'){
                    deleteLetters++;
                }
                i++;
                
            }
  
            printf("%ld\n",strlen(phrase01) - deleteLetters);
        }



  
}
