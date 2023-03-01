#include<stdio.h>
using namespace std;

int main(){
    
    int N, positivo=0, negativo=0, par=0, impar=0, cont=0;
    
    for (cont=0;cont<5;cont++){
    scanf("%d", &N);
    if(N%2==0){
    par++;
    }
    if(N%2!=0){
    impar++;
    }
    if(N>0){
    positivo++;
    }
    if(N<0){
    negativo++;
    }
    }
 printf("%d valor(es) par(es)\n",par);
 printf("%d valor(es) impar(es)\n",impar);
 printf("%d valor(es) positivo(s)\n",positivo);
 printf("%d valor(es) negativo(s)\n",negativo);
 
    return 0;
}