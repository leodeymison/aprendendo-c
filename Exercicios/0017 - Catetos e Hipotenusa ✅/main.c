#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    system("clear");
    float oposto, adjacente, hipotenusa;
    printf("Cateto oposto: ");
    scanf("%f", &oposto);
    printf("Cateto adjacente: ");
    scanf("%f", &adjacente);
    float result = sqrt((oposto * oposto) + (adjacente * adjacente));
    printf("\nO resultado da hipotenusa é %f\n\n", result);
    system("pause");
    return 0;
}