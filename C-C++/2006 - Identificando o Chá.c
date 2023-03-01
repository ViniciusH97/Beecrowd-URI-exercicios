#include<stdio.h>

int main()
{
    int T, N[5], i, soma=0;
        scanf("%d", &T);
        for(i=0;i<5;i++){
            scanf("%d", &N[i]);
            if(N[i] == T)
            soma++;
         
        }
        printf("%d\n", soma);
        
    return 0;
}

