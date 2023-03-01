#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X, i=0, C=0, A=0;
    
        scanf("%d", &N);
    do{
        scanf("%d", &X);
        if(X>=10 && X<=20)
        C++;
            if(X<10 || X>20)
            A++;
    i++;
    }
    while (i<N);
        printf("%d in\n", C);
        printf("%d out\n", A);
    
    return 0;
}