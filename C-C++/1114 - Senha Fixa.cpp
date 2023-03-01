#include<stdio.h>
using namespace std;

int main()
{
    int senha, cont=0;
    
    do{
        scanf("%d", &senha);
            if(senha!=2002)
            printf("Senha Invalida\n");
            else
            printf("Acesso Permitido\n");
        cont++;
    }
    while (senha!=2002);
        
    return 0;
}