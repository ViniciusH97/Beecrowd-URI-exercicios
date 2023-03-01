#include<stdio.h>

int main()
{
    int C, i;
    char nome[80];
    int N;
    
    scanf("%d",&C);
    for(i=0;i<C;i++){
        scanf("%s", nome);
        scanf("%d", &N);
        
    if(strcmp(nome,"Thor")==0){
        printf("Y\n");
    }else{
        printf("N\n");
         }
    }
    return 0;
}

