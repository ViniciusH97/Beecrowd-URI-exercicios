#include<iostream>

int main(void){

    int i=0, num;

    std::cin>>num;

    while(i != 6){
        if(num%2 != 0){
            std::cout<<num<<std::endl;
            num++;
            i++;
        }else{
            num++;
        }
    }
}
