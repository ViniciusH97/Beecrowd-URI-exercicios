#include<stdio.h>

int main()
{
   double r, pi, area;
   
   scanf("%lf", &r);

   pi=3.14159;

   area=(4/3.0)*pi*r*r*r;

   printf("VOLUME = %.3lf\n", area);
   
   return 0;
}