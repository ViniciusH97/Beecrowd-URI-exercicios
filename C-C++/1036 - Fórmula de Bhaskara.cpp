#include<stdio.h>

using namespace std;

int main()
{
    double A, B, C, D, X1, X2;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    D=B*B-(4*A*C);
    X1=(-B+sqrt(D))/(2*A);
    X2=(-B-sqrt(D))/(2*A);
    
    if ((A==0)||(D<0))
         printf("Impossivel calcular\n");
         
         else{
         
         printf("R1 = %.5lf\n", X1);
         printf("R2 = %.5lf\n", X2);
         }

    return 0;
}