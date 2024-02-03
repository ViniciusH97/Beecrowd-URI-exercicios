#include <iostream>
#include <cmath>

int main(){

    int a, b, aux;

    std::cin >> a >> b;

    if(a == b){
        std::cout<<0<<std::endl;

        return 0;
    }

    if(b < 0){
        b = std::abs(b);
    }

    aux = a;

    while(a != b){
        if(a%2 != 0){
            if(aux == a){
                a--;
            }else{
                a--;
            }
        }else{
            a--;
            std::cout<<a<<std::endl;
        }
    }

}