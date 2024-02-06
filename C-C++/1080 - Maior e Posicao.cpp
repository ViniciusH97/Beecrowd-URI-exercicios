#include<iostream>

int main(void){

    int n=0, maior=0, posicao;

    for(int i=1;i<=100;i++){
        std::cin>>n;

        if(n > maior){
            maior = n;
            posicao = i;
        }
    }
    
    std::cout<<maior<<"\n"<<posicao<<std::endl;
}