#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("clear");

    int number;
    printf("Digite um número: ");
    scanf("%i", &number);
    int suc = number + 1;
    int ant = number - 1;

    system("clear");
    printf("======================================\n");
    printf("O número é: %i\n", number);
    printf("O seu sucessor é: %i\n", suc);
    printf("O seu antecessor é %i\n", ant);
    printf("======================================\n\n");

    system("pause");
    return 0;
}