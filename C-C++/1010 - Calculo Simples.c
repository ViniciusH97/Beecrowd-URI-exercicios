#include <stdio.h>

int main()
{
    int C, Q, i;
    double V, T = 0;

    for (i = 0; i < 2; i++)
    {
        scanf("%d", &C);
        scanf("%d", &Q);
        scanf("%lf", &V);
        T = (Q * V) + T;
    }

    printf("VALOR A PAGAR: R$ %.2lf\n", T);

    return 0;
}