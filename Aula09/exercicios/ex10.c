#include <stdio.h>
#include <string.h>

int main()
{
    char firstString[50];
    char secondString[50];
    int firstArraySize, secondArraySize;
    int i = 0, j = 0;
    int timesStringAisInB = 0;
    int equalLetters = 0;
    int realTimePosition;

    scanf("%[^\n] %[^\n]", firstString, secondString);
    firstArraySize = strlen(firstString);
    secondArraySize = strlen(secondString);

    for (i = 0; i < secondArraySize; i++)
    {
            equalLetters = 0;
            realTimePosition = i;
            for (j = 0; j < firstArraySize; j++)
            {
                if (firstString[j] == secondString[i])
                {
                    equalLetters++;
                    i++;
                }
                else
                {
                    i = realTimePosition;
                    break;
                }

                if (equalLetters == firstArraySize)
                {
                    timesStringAisInB++;
                    i = realTimePosition;
                    break;
                }
            }

    }

    printf("%d\n", timesStringAisInB);

    return 0;
}