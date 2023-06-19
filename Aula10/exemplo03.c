#include <stdio.h>
#include <string.h>

typedef struct alunos
{
    char matricula[30];
    char nome[30];
}alunos;

int main (){
    int i,idx = -1;
    int opcao;
    char matriculaPesquisada[50];
    char nomePesquisado[50];
    alunos aluno[5];


    for(i = 0; i < 5; i ++){
        printf("matricula:");
        scanf(" %s",aluno[i].matricula);
        printf("nome:");
        scanf(" %[^\n]",aluno[i].nome);
        printf("\n");
    }


    do{
        printf("digite a opcao: ");
        scanf(" %d", &opcao );
        printf("%d",opcao);

        if(opcao == 1){
            printf("matricula para pesquisa:");
            scanf(" %s",matriculaPesquisada);
            i = 0;
            idx = -1;
            while(i < 5){
               
                
                if(strcmp(aluno[i].matricula,matriculaPesquisada ) == 0){
                 //   printf("Aluno encontrado %s", aluno[i].nome);
                    idx = i;
                    break;
                }
                i++;
            }

             if(idx == -1){
                    printf("nome nao encontrado\n");
                }
                else{
                    printf("matricula %s\n",aluno[idx].matricula);
                    printf("nome %s\n",aluno[idx].nome);
                }
        }

        else if(opcao == 2){
             printf("nome para pesquisa:");
             scanf(" %s",nomePesquisado);
             i = 0;
             idx = -1;
            while(i < 5){
                if(strcmp(aluno[i].nome,nomePesquisado) == 0){
                  //  printf("matricula encontrada %s", aluno[i].matricula);
                    idx = i;
                    break;
                    
                }
                i++;
            }

             if(idx == -1){
                    printf("matricula nao encontrada\n");
                }
                else{
                    printf("matricula %s\n",aluno[idx].matricula);
                    printf("nome %s\n",aluno[idx].nome);
                }
        }

  

    }while(opcao != 9);

    printf("\nsaiu\n");

    return 0;
}