#include<stdio.h>

int main()
{
   int T, VM, DP;
   double L;
   
   scanf("%d", &T);
   scanf("%d", &VM);
   DP=T*VM;
   L=DP/12.0;
   printf("%.3lf\n", L);
   
   return 0;
}