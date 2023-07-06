#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct datetype{
    int day;
    int month;
    int year;
}dateType;

void convertDate(char *date);


int main()
{
    char *date = (char*) malloc(80 * sizeof(char));

    if(!date)
    {
        printf("Memória Insuficiente\n");
        exit(1);
    }

    scanf("%s", date);

    convertDate(date);

    return 0;
}


void convertDate(char *date)
{   
    char day[3];
    char month[3];
    char year[5];
    dateType convertedDate;
    
    //atoi é string para int

    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';
    month[0] = date[3];
    month[1] = date[4];
    month[2] = '\0';
    year[0] = date[6];
    year[1] = date[7];
    year[2] = date[8];
    year[3] = date[9];
    year[4] = '\0';
      
    convertedDate.day = atoi(day);
    convertedDate.month = atoi(month);
    convertedDate.year = atoi(year);

    printf("%d de ", convertedDate.day);
    switch (convertedDate.month)
    {
    case 1:
        printf("janeiro");
        break;
    case 2:
        printf("fevereiro");
        break;
    case 3:
        printf("março");
        break;
    case 4:
        printf("abril");
        break;
    case 5:
        printf("maio");
        break;
    case 6:
        printf("junho");
        break;
    case 7:
        printf("julho");
        break;
    case 8:
        printf("agosto");
        break;
    case 9:
        printf("setembro");
        break;
    case 10:
        printf("outubro");
        break;
    case 11:
        printf("novembro");
        break;
    case 12:
        printf("dezembro");
        break;
    
    }

    printf(" de");
    printf(" %d\n",convertedDate.year);

   


   
}