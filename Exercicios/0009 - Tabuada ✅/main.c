#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tabuada(int number)
{
    printf("\n====================\n");
    for (int i = 1; i < 11; i++)
    {
        printf("%i x %i =  %i\n", number, i, number * i);
    }
    printf("====================\n");
}

int main()
{
    system("clear");
    while (0 == 0)
    {
        int number;
        system("clear");
        printf("Valor base da tabuada: ");
        scanf("%i", &number);
        tabuada(number);

        int option;
        printf("Escolha uma opção: \n");
        printf("0. nova \n");
        printf("1. sair \n");
        printf("---------------------\n");
        printf("> ");
        scanf("%i", &option);
        if (option == 1)
        {
            break;
        }
    }
    system("pause");
    return 0;
}