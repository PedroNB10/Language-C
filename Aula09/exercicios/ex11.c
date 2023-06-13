#include <stdio.h>
#include <stdlib.h>

int main (){
    char n1[50], n2[50], n3[50], n4[50];
    int num01,num02,num03,num04;


   scanf("%s %s %s %s",n1,n2,n3,n4);

   // sscanf(n1,n2,n3,n4,"%d %d %d %d",&num01,&num02,&num03,&num04);
    sscanf(n1,"%d",&num01);
    sscanf(n2,"%d",&num02);
    sscanf(n3,"%d",&num03);
    sscanf(n4,"%d",&num04);

    printf("%d\n",num01 + num02 + num03 + num04);

    




    return 0;
}