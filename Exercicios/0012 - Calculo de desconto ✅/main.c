#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void title()
{
    printf("===============================\n");
    printf("===== ALCAN DISTRIBUIDORA =====\n");
    printf("===============================\n");
}

int options()
{
    int continua;
    printf("-------------------------------\n");
    printf("Escolha uma opção: \n");
    printf("0. Novo valor: \n");
    printf("1. Mudar desconto: \n");
    printf("2. Sair: \n");
    printf("-------------------------------\n");
    printf("> ");
    scanf("%i", &continua);
    return continua;
}

int main()
{
    system("clear");
    title();
    float desconto;
    printf("Porcentagem do desconto: ");
    scanf("%f", &desconto);
    while (0 == 0)
    {
        system("clear");
        printf("Valor do produto: R$");
        float value;
        scanf("%f", &value);
        system("clear");
        title();
        printf("Valor produto: R$%.2f\n", value);
        printf("Desconto fixo: %.2f%\n", desconto);
        float newValue = value - ((value * desconto) / 100);
        printf("Valor final: R$%.2f\n", newValue);
        int continua = options();
        if (continua == 1)
        {
            printf("Porcentagem do desconto: ");
            scanf("%f", &desconto);
        }
        if (continua == 2)
        {
            system("clear");
            break;
        }
    }

    system("pause");
    return 0;
}