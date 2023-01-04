#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menuStart()
{
    int option;
    while (0 == 0)
    {
        printf("------------------------------------\n");
        printf("Escolha uma opção:\n");
        printf("1. Conômetro\n");
        printf("2. Temporizador\n");
        printf("------------------------------------\n");
        printf("> ");
        scanf("%i", &option);
        system("clear");
        if (option == 1 || option == 2)
        {
            break;
        }
        else
        {
            printf("Escolha um opção válida!!\n");
        }
    }
    return option;
}

void conometro()
{
    static int hours = 0, minutes = 0, secounds = 0;
    printf("%i:%i:%i\n\n", hours, minutes, secounds);
}
void temporizador()
{
    static int hours, minutes, secounds;
    printf("Horas: ");
    scanf("%i", &hours);
    printf("Minutos: ");
    scanf("%i", &minutes);
    printf("Segundos: ");
    scanf("%i", &secounds);

    printf("%i:%i:%i\n\n", hours, minutes, secounds);
}

int main()
{
    system("clear");
    const int option = menuStart();
    if (option == 1)
    {
        conometro();
    }
    if (option == 2)
    {
        temporizador();
    }
    system("pause");
    return 0;
}