#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// M = toupper
// m = tolower

char SmallText()
{
}
char BigText()
{
}

int main()
{
    system("clear");
    char name[255];
    printf("Digite o seu nome completo: ");
    scanf("%s", &name);

    printf("\nSeu nome maiúsculo é %s e minúsculo %a", name, name);
    system("pause");
    return 0;
}