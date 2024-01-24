#include <iostream>

int main(){

    int a, b, c, d;

    std::cin>>a; std::cin>>b; std::cin>>c;
    std::cin>>d;

    int soma_ab = a + b;
    int soma_cd = c + d;


    if(b > c){
        if(d > a){
            if (soma_cd > soma_ab){
                if(a && b && c && d > 0){
                    if(a%2 == 0){
                        std::cout<<"Valores aceitos"<<std::endl;
                    }else
                        std::cout<<"Valores nao aceitos"<<std::endl;
                }else
                        std::cout<<"Valores nao aceitos"<<std::endl;
            }else
                        std::cout<<"Valores nao aceitos"<<std::endl;
        }else
                        std::cout<<"Valores nao aceitos"<<std::endl;
    }else
                        std::cout<<"Valores nao aceitos"<<std::endl;

    return 0;
}