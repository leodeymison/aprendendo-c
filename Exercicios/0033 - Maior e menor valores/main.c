#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("clear");
    int valueBig;
    int valueSmall;
    int value;
    while (0 == 0)
    {
        printf("Digite um número inteiro: [entre -999 e 999] ");
        scanf("%i", &value);

        if (value == -1000)
        {
            break;
        }
        if (value > valueBig)
        {
            valueBig = value;
        }
        if (value < valueSmall)
        {
            valueSmall = value;
        }
    }
    printf("O maior valor é %i\n", valueBig);
    printf("O menor valor é %i\n", valueSmall);

    system("pause");
    return 0;
}