#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    float km, value, taxaSmall = 0.50, taxaBig = 0.45;
    int dintaceSmall = 200;
    system("clear");
    printf("\033[0;32mQuantos kilômetros tem a viagem? \033[1;37m");
    scanf("%f", &km);
    if (km <= dintaceSmall)
    {
        value = km * taxaSmall;
    }
    else
    {
        value = km * taxaBig;
    }
    printf("\n\033[0;34mA sua viagem custará \033[1;37mR$%.2f \n\n", value);
    system("pause");
    return 0;
}