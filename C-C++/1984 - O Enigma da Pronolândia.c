#include <stdio.h>

int main()
{
    char letra[10];
    char li[10];
    int i, aux = 0;

    scanf("%s", letra);
    for (i = strlen(letra) - 1; i >= 0; i--)
    {
        li[aux] = letra[i];
        aux += 1;
    }
    li[aux] = '\0';

    printf("%s\n", li);

    return 0;
}
