#include<iostream>
#include<array>

int main(void){

    int n, valor;

    std::cin>>n;

    for(int i=0;i<n;i++){
        std::cin>>valor;
        if(valor > 0){
            if(valor%2 == 0){
                std::cout<<"EVEN POSITIVE"<<std::endl;
            }else if(valor%2 != 0){
                std::cout<<"ODD POSITIVE"<<std::endl;
            }
        }else if(valor < 0){
            if(valor%2 == 0){
                std::cout<<"EVEN NEGATIVE"<<std::endl;
            }else{
                std::cout<<"ODD NEGATIVE"<<std::endl;
            }
        }else{
            std::cout<<"NULL"<<std::endl;
        }
    }
}