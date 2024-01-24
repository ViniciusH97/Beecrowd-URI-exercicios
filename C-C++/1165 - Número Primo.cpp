#include<bits/stdc++.h>

int main(){
    
    int n, c, x, t, r;
    
    scanf("%d",&n);
    for (c=0; c<n; c++){
        t=1;
        scanf("%d",&x);
        for (r=2;r<=(int)sqrt(x);r++){
            if (x%r==0) t++;
        }
        if (t==1&&x!=1) {
            printf("%d eh primo\n",x);
        }
        else {
            printf("%d nao eh primo\n",x);
        }
    }
    return 0;
}