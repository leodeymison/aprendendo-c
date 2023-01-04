#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma(int value1, int value2)
{
    return value1 + value2;
}

int main()
{
    system("clear");

    int value01, value02;

    printf("Digite uma valor: ");
    scanf("%i", &value01);

    printf("Digite outro valor: ");
    scanf("%i", &value02);

    int resultSoma = soma(value01, value02);

    system("clear");
    printf("O resultado da soma entre %i e %i é igual a %i\n\n", value01, value02, resultSoma);

    system("pause");
    return 0;
}