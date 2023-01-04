#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("clear");
    char list[25][4];

    for (int index = 1; index < 5; index++)
    {
        printf("Nome do %i° aluno(a): ", index);
        scanf("%s", list[index - 1]);
    }

    int number = (rand() % 100) % 4;

    printf("\nO nome sorteado foi: %s\n\n", &list[number]);

    system("pause");
    return 0;
}