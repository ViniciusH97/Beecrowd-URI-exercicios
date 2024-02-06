#include<iostream>
#include<iomanip>

int main(void){

    int q;
    float media, v1, v2, v3;

    std::cin>>q;

    for(int i=1;i<=q;i++){
        std::cin>>v1>>v2>>v3;
        media = ((v1*2) + (v2*3) + (v3*5))/10;
        std::cout<<std::fixed<<std::setprecision(1)<<media<<std::endl;
    }

}