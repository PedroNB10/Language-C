#include <stdio.h>
#include <stdlib.h>

typedef struct conta
{
    int num;
    char nome[50];
    float saldo;
} conta;

int main()
{
    conta c;
    int op,idx; // opcao
    FILE *arq = NULL;

    scanf("%d", &op);

    while (op != 9)
    {
        if (op == 1)
        { // inserir conta

        printf("Numero: ");
        scanf(" %d", &c.num);
        printf("Nome:");
        scanf(" %s", c.nome);
        printf("Saldo:");
        scanf(" %f", &c.saldo);

        arq = fopen("banco.txt", "ab");//adiciona no final

        fclose(arq);
        fwrite(&c, sizeof(conta), 1, arq);


        }

        else if (op == 2)
        {
            printf("Numero do registro: ");
            scanf("%d", &idx); //primeiro, segundo ...

            //ler a informação antiga

            arq = fopen("banco.txt", "r+b");
            //posiciona o ponteiro no registro indicado em idx
            fseek(arq, (idx -1 ) *sizeof(conta),SEEK_SET);
            // O primeiro registro sempre cai no 0, tem -1, por conta do usuário
            //leitura do registro
            fread(&c, sizeof(conta), 1, arq);

            //leitura do novo saldo
            printf("Digite o novo saldo: ");

            scanf(" %f", &c.saldo);

            fseek(arq, (idx -1) * sizeof(conta), SEEK_SET);

            fclose(arq);// salva o arquivo

        }
        else if(op == 3)
        {
            printf("\n =========================== \n");
            arq = fopen("banco.txt", "rb");
            fread(&c, sizeof(conta), 1, arq); 

            while(!feof(arq)) //enquanto não estiver no final do arquivo 
            {
                printf("%d\t%s\t%.2f\n", c.num,c.nome,c.saldo);
                fread(&c, sizeof(conta), 1, arq);// está aqui para não ter problema de leitura duas vezes no final do arquivo
            }

            fclose(arq);

        }
        scanf("%d", &op);
    }

    return 0;
}