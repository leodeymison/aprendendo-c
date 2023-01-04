#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define typeof(var) _Generic((var),       \
                             char         \
                             : "Char",    \
                               int        \
                             : "Integer", \
                               float      \
                             : "Float",   \
                               char *     \
                             : "String",  \
                               void *     \
                             : "Pointer", \
                               default    \
                             : "Undefined")

int main()
{
    system("clear");
    char algo[100];
    printf("Digite algo: ");
    scanf("%s", &algo);

    printf("\n============================ \n");
    char type[10] = typeof(algo);
    printf("- Tipo primitivo: %s\n", type);
    printf("- Só tem espaços? \n");
    printf("- É um número? \n");
    printf("- É um alfanumérico? \n");
    printf("- É alfabético? \n");
    printf("- Está e maiúsculas? \n");
    printf("- Está em minúsculas? \n");
    printf("- Está com a primeira letra maiúscula? \n\n");
    return 0;
}