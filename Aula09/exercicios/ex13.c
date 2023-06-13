#include <stdio.h>


int main() {

    int n1,n2,n3,n4,sum;
    char stringConverted[50];
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    sum = n1 + n2 + n3 + n4;

    sprintf(stringConverted,"%d",sum);
    printf("%s\n",stringConverted);



    return 0;
}
