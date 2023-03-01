#include<stdio.h>

int main(){

    double a, b ,c, tri, cir, trap, qua, ret;
    int i; 

        scanf("%lf", &a);
        scanf("%lf", &b);
        scanf("%lf", &c);

    tri = (a * c) / 2;
    cir = (c * c) * 3.14159;
    trap = (a + b) * c / 2;
    qua = b * b;
    ret = a * b;

        printf("TRIANGULO: %.3lf\n", tri);
        printf("CIRCULO: %.3lf\n", cir);
        printf("TRAPEZIO: %.3lf\n", trap);
        printf("QUADRADO: %.3lf\n", qua);
        printf("RETANGULO: %.3lf\n", ret);

    return 0;
}