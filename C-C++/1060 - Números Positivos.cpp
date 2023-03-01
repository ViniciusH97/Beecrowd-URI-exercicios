#include<stdio.h>

int main()
{
    int S=0, C;
    
    double V;
    
    for(C=0;C<6;C++){
    scanf("%lf", &V);
    if (V>0)
    S++;
    }
    printf("%d valores positivos\n", S);
   
    return 0;
}
