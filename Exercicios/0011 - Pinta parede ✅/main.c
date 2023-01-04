#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void title()
{
    printf("=======================================\n");
    printf("==== CALCULADOR DE GASTOS DE TINTA ====\n");
    printf("=======================================\n");
}

int main()
{
    system("clear");
    float largura, altura, tinta;
    title();
    printf("Qual a largura da parede? ");
    scanf("%f", &largura);
    printf("Qual a altura da parede? ");
    scanf("%f", &altura);
    printf("Sua parede em um dimensão de %.2fx%.2f e sua área é de %.2fm²\n", largura, altura, largura * altura);
    printf("Para pintar essa parede, você precisará de %.2f litros de tinta.\n\n", (largura * altura) / 2);
    system("pause");
    return 0;
}