#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("clear");
    char students[25][4];
    for (int index = 0; index < 4; index++)
    {
        int number = (rand() % 100) % 4;
        printf("Nome do %i° aluno: ", students[index] + 1);
        scanf("%s", &students[index]);
    }
    system("pause");
    return 0;
}