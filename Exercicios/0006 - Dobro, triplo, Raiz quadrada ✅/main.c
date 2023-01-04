#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    double number;
    printf("Digite um número: ");
    scanf("%lf", &number);
    printf("=============================================\n");
    printf("- O dobro do número: %.2lf\n", number * 2);
    printf("- O triplo do número: %.2lf\n", number * 3);
    double r4 = sqrt(number);
    printf("- A raiz quadrada do número: %.2lf\n", r4);
    printf("=============================================\n\n");
    return 0;
}