#include<stdio.h>

int main(){

    char nome[80];
    double sf, m, total;

    scanf("%s", nome);
    scanf("%lf%lf", &sf, &m);
    
    total=(m*0.15)+sf;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}