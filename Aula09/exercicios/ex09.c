#include <stdio.h>
#include <string.h>

int main (){

    char phrase1[60];
    int position,arraySize;
    char c;


    scanf("%[^\n]",phrase1);
    scanf(" %c %d",&c, &position);
    
    arraySize = strlen(phrase1);

    while(position < arraySize-1){

        if(c == phrase1[position]){
            
            printf("%d\n",position);
            break;
        }
        position++;
    }

    
    
    if(position == arraySize -1){
        printf("-1\n");
    }
  
    
 

    return 0;
}