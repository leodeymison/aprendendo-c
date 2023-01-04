#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("clear");
    float note1, note2, note3, note4;
    printf("Nota do 1° bimestre: ");
    scanf("%f", &note1);
    printf("Nota do 2° bimestre: ");
    scanf("%f", &note2);
    printf("Nota do 3° bimestre: ");
    scanf("%f", &note3);
    printf("Nota do 4° bimestre: ");
    scanf("%f", &note4);

    float media = (note1 + note2 + note3 + note4) / 4;
    printf("\nA média do aluno foi %f\n", media);
    if (media < 7)
    {
        printf("- REPROVADO\n\n");
    }
    else
    {
        printf("- APROVADO\n\n");
    }

    system("pause");
    return 0;
}