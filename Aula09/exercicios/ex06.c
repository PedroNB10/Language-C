#include <stdio.h>
#include <string.h>


int main (){
    char frase[100];
    char frase2[100];
    int i = 0, j = 0, contSpaces = 0,contEquality=0,arraySize;
    
    scanf("%[^\n]",frase);

    while (frase[i] !='\0')
    {

      //o rato tamanho: 6
      //orato  tamanho: 5
        
        if(frase[i] != ' '){
          
          frase2[j] = frase[i];
          j++;
        }
        else{
          contSpaces++;
        }
    

      i++;
        
    }



    frase2[i - contSpaces] = '\0';
    arraySize = strlen(frase2);
    i = 0;
    j = arraySize - 1;

    while(i < arraySize){
        if(frase2[i] == frase2[j]){
            contEquality++;
        }

        i++;
        j--;
    }

    if(contEquality == arraySize){
      printf("sim\n");
    }
    else{
      printf("nao\n");
    }

    // printf("Igualdades %d\n",contEquality);
    // printf("Tamanho do array %d\n",arraySize);


    //printf("%ld\n",strlen(frase2));
    //printf("%d\n",i - contSpaces);
    
   // printf("%s\n",frase2);


    
    

    
    return 0;
}