#include<iostream>

int main(void){

    int n; 

    std::cin>>n;
    
    for(int i=1;i<=10000;i++){
        if(i%n == 2){
            std::cout<<i<<std::endl;
        }
    }
}