#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("clear");

    float car;
    int km = 80, value = 7;

    printf("Qual a velocidade do carro: ");
    scanf("%f", &car);

    if (car > km)
    {
        printf("\nVocê foi MULTADO\n");
        float pagar = (car - km) * value;
        printf("A velocidade máxima é de %ikm/h\n", km);
        printf("Você deve pagar uma multa de R$%.2f\n\n", pagar);
    }
    else
    {
        printf("\nBoa viagem!!!\n\n");
    }

    system("pause");
    return 0;
}
