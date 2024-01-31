#include <iostream>

int main(void){

    int num=1;

    for(int i = 1; i<=100; i++){
        if(num % 2 == 0){
            std::cout<<num<<std::endl;
            num++;
        }else if(num % 2 == 1){
            num++;
        }
    }
}