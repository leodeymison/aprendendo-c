// 5,41 = dólar hoje
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float value;
    system("clear");
    printf("Quanto direiro em real você tem? R$");
    scanf("%f", &value);
    printf("\nCom o valor de R$%.2f você pode comprar US$%.2f\n\n", value, value / 5.41);
    system("pause");
    return 0;
}