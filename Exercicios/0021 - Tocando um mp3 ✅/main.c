#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("clear");
    printf("Tocando MP3\n\n");
    system("mpg123 test.mp3");
    system("pause");
    return 0;
}