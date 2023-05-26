#include <stdio.h>

int main (){
    int i;
    char vetor[8];

       for (i = 0; i < 8; i++){
          scanf(" %c", &vetor[i]);
      }

      for (i = 7; i >= 0; i--){
          printf("%c ",vetor[i]);
      }

    return 0;
}