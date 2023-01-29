#include <stdio.h>

int main(void)
{
    int number = 123;  // [Inteiro]
    float peso = 67.5; // [Flutuante]
    char carac = 'a';  // [Caracterie]
    char name[10];     // [String] Não pode ser atribuida com um valor default

    printf("%i\n", number);
    printf("%f\n", peso);
    printf("%c\n", carac);
    printf("%s\n\n", name);

    return 0;
}