#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void title()
{
    printf("================================\n");
    printf("======= AUMENTO SALARIAL =======\n");
    printf("================================\n");
}

int options()
{
    int continua;
    printf("--------------------------------\n");
    printf("Escolha uma opção: \n");
    printf("0. Novo salário: \n");
    printf("1. Mudar porcentagem de aumento: \n");
    printf("2. Sair: \n");
    printf("--------------------------------\n");
    printf("> ");
    scanf("%i", &continua);
    return continua;
}

int main()
{
    system("clear");
    title();
    printf("Porcentagem de aumento: ");
    float aumento;
    scanf("%f", &aumento);
    while (0 == 0)
    {
        system("clear");
        title();
        printf("Valor do salário atual: R$");
        float value;
        scanf("%f", &value);
        float valueAumento = (value * aumento) / 100;
        float newValue = value + valueAumento;
        printf("Porcentagem do aumento: %.2f%\n", aumento);
        printf("valor do aumento: R$%.2f\n", valueAumento);
        printf("Novo salário: R$%.2f\n\n", newValue);

        int option = options();
        if (option == 1)
        {
            printf("Porcentagem de aumento: ");
            scanf("%f", &aumento);
        }
        if (option == 2)
        {
            system("clear");
            break;
        }
    }
    system("pause");
    return 0;
}