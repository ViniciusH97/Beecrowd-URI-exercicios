#include<iostream>
#include<array>
#include<iomanip>

int main(void){

    std::array<float, 5> num;
    int quantidade_positivos=0, i;
    float media, total;
    
    for(i=1;i<5;i++){

        std::cin>>num[i];

        if(num[i] > 0){
            quantidade_positivos++;

        }else if(num[i] < 0){
            num[i] = 0;
            i--;
        }
    }

    for(i=1;i<5;i++){
        total = total + num[i];
    }

    media = total/quantidade_positivos;

    std::cout<<std::fixed<<std::setprecision(1)<<quantidade_positivos<<" valores positivos"<<std::endl;
    std::cout<<media<<std::endl;

}