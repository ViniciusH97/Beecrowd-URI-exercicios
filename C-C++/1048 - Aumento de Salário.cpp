#include<stdio.h>
using namespace std;

int main()
{        
   double S, R, P, NS;
   
   scanf("%lf", &S);
   if(S<=400.00)
   printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",S*1.15, S*0.15);
   else if (S<=800.0)
   printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", S*1.12, S* 0.12);
   else if (S<=1200.0)
   printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", S*1.10,S*0.10);
   else if (S<=2000.0)
   printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", S*1.07, S*0.07);
   else
   printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",S*1.04,S*0.04);
   
    return 0;
}