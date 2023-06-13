#include <stdio.h>
#include <string.h>

int main()
{

    char T[1000000];
    char vetorComparacao_01[100000], vetorComparacao_02[100000];
    int resposta = 0;
    long long int i, j = 0, contadorDiferenteA = 0, tamanhoDoSegundoArray, tamanhoDoPrimeiroArray, contadorAuxiliar = 0;



    scanf("%s", T);

    for (i = 0; i < strlen(T); i++)
    {
        if (T[i] != 'a')
        {
            vetorComparacao_01[j] = T[i];
            contadorDiferenteA++;

            j++;
        }
    }

    tamanhoDoSegundoArray = contadorDiferenteA / 2;
    tamanhoDoPrimeiroArray = strlen(T) - tamanhoDoSegundoArray;

    // caso do abbabb:
    // abbabb ==> 6
    // abba ==> 4
    // bb ==> 2


    // caso do abacaxibcxi:
    // abacaxibcxi ==> 11
    // abacaxi ==> 7
    // bcxi ==> 4


    // caso do aacaababc:
    // aacaababc ==> 9
    // aacaaba ==> 7
    // bc ==> 2


   

    for (i = 0; i < strlen(vetorComparacao_01) / 2; i++)
    {
        vetorComparacao_02[i] = vetorComparacao_01[i];
    }

    j = 0;
    for (i = strlen(vetorComparacao_02); i < strlen(vetorComparacao_01); i++)
    {
        if (vetorComparacao_02[j] == vetorComparacao_01[i])
        {
            contadorAuxiliar++;
            j++;
        }
    }

    if (contadorAuxiliar != strlen(vetorComparacao_02))
    {
        resposta = -1;
    }
    else
    {
        for (i = tamanhoDoPrimeiroArray; i < strlen(T); i++)
        {

            if (T[i] == 'a')
            {
                resposta = -1;
                break;
            }
        }
        

        if ((contadorDiferenteA % 2 != 0) && (resposta != -1)) 
        {
            
            resposta = -1;
        }

    }

    if (resposta == -1)
    {
        printf("%d", resposta);
    }
    else{

            for (i = 0; i < tamanhoDoPrimeiroArray; i++)
            {
                printf("%c", T[i]);
            }
    }

    printf("\n");
    return 0;
}