#include <stdio.h>

int main()
{
    int I = 1, S = 0, C = 0;
    double M;

    while (I > 0)
    {
        scanf("%d", &I);
        if (I > 0)
        {
            S = S + I;
            C++;
        }
    }
    M = (double)S / C;
    printf("%.2lf\n", M);

    return 0;
}
