#include <stdio.h>
#include <string.h>

int main (){

    char phrase1[60];
    int i,j;

    scanf("%[^\n]",phrase1);
    scanf("%d %d",&i,&j);

    while( i <= j){
        printf("%c",phrase1[i]);
        i++;
    }

    printf("\n");
  
    
 

    return 0;
}