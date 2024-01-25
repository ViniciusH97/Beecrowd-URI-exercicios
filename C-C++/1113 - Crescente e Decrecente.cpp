#include <stdio.h>

int main()
{
    int X = 0, Y = 1;

    while (X != Y)
    {

        scanf("%d", &X);
        scanf("%d", &Y);
        if (X > Y)
            printf("Decrescente\n");
        else if (Y > X)
            printf("Crescente\n");
    }

    return 0;
}
