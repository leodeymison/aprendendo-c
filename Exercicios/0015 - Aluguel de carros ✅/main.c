#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("clear");
    float valueKm = 0.15, valueDay = 60, kms;
    int days;
    printf("Quantidade de dias: ");
    scanf("%i", &days);
    printf("Quantidade de quilômetros: ");
    scanf("%f", &kms);
    float total = (days * valueDay) + (kms * valueKm);
    printf("\nO total a pagar é R$%.2f\n\n", total);
    system("pause");
    return 0;
}