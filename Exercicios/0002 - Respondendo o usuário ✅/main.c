#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("clear");

    printf("Digite o seu nome: ");
    char name[100];
    scanf("%s", &name);

    system("clear");

    printf("Prazer em te conhecer, %s!\n\n", name);

    system("pause");
    return 0;
}