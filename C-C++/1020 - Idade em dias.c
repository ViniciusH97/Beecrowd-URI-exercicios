#include<stdio.h>

int main(){

    int dias, i1=0, i2=0;

    scanf("%d", &dias);

    while(dias >= 365){
        dias = dias - 365;
        i1++;
    }
    while(dias >= 30){
        dias = dias - 30;
        i2++;
    }

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", i1, i2, dias);

    return 0;

}