#include <stdio.h>

int main(void){

    float a,b,c;

    scanf("%f%f%f", &a, &b, &c);

    if((a + b > c) && (b + c > a) && (a + c > b)){
        float perimetro = a+b+c;
        printf("Perimetro = %.1f\n", perimetro);
    }else{
        float area = ((a+b) * c) / 2;
        printf("Area = %.1f\n", area);
    }

}