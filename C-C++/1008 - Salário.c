#include<stdio.h>

int main()
{

    int n, h;
    double ns, sf;

    scanf("%d%d%lf", &n,&h,&sf);
    ns = h * sf;
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2lf\n", ns);

    return 0;
}