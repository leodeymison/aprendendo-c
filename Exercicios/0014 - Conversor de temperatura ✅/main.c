#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("clear");
    printf("Temperatura em graus Celsius: ");
    float temp;
    scanf("%f", &temp);
    printf("\n- %.2f°C é equivalente a %.2f°F\n\n", temp, (temp * 1.8) + 32);
    system("pause");
    return 0;
}