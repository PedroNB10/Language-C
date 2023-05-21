#include <stdio.h>

int main (){
    int A[5] = {2,4,6,8,10};
    int B[5] = {5,4,3,2,1};
    int ia,ib;

    int controle =0;
// A interseccao B = {2,4}
// A - B = 6,8 e 10 nao podem ser iguais e nao pode ser o elemento q tem em B e nao tem em A

printf("A ∩ B : ");

for (ia = 0; ia < 5; ia++) {
    for(ib = 0; ib < 5; ib++){
        if(A[ia] == B[ib]){
            printf("%d ",A[ia]);
        }
    }

}

printf("\nA - B : ");

for (ia = 0; ia < 5; ia++) {
    int estaEmB = 0;

    for(ib = 0; ib < 5; ib++){
      if(A[ia] == B[ib]){
        estaEmB = 1;
        break;
      }
    }

    if(!estaEmB){
        printf("%d ",A[ia]);
    }

}

printf("\nA - B : ");

for (ia = 0; ia < 5; ia++) {
   controle = 0;

    for(ib = 0; ib < 5; ib++){
      if(A[ia] == B[ib]){
        controle++;
        
      }
    }
    
    if(controle == 0){
        printf("%d ",A[ia]);
    }

}



    return 0;
}