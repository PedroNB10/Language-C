#include <stdio.h>


int main (){
    char frase[100];
    char frase2[100];
    int i = 0, j = 0, contSpaces = 0;
    
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


    frase2[i -contSpaces] = '\0';
    printf("%s\n",frase2);


    
    

    
    return 0;
}