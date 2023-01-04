#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    system("clear");
    printf("Digite um número flutuante: ");
    float number;
    scanf("%f", &number);
    system("clear");
    printf("\nO número é %f e sua porção inteira é %.0f\n\n", number, number);
    system("pause");
    return 0;
}