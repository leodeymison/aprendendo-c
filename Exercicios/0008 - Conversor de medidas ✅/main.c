#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("clear");

    float metros;
    printf("Um medida em metros: ");
    scanf("%f", &metros);

    printf("\nQuilometros: %fkm\n", metros / 1000);
    printf("Centimetros: %fcm\n", metros * 100);
    printf("Milímetro: %fmm\n", metros * 1000);

    system("pause");
    return 0;
}