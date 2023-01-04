#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int input(char title[100])
{
    int result, number;
    char letra;
    do
    {
        printf("%s", title);
        result = scanf("%i", &number);
        do
        {
            letra = getchar();
        } while (letra != '\n');
    } while (result == 0);
    return number;
}

int main()
{
    system("clear");
    int number = input("Digite um número: ");
    int result = number % 2;
    if (result == 0)
    {
        printf("\nO número %i é PAR\n\n", number);
    }
    else
    {
        printf("\nO número %i é IMPAR\n\n", number);
    }
    system("pause");
    return 0;
}