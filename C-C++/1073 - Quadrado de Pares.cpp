#include<iostream>

int main(void){

    int n, c;
    std::cin>>n;
    c=2;

    for(int i=1;i<n;i++){
        if(c <= n){
            std::cout<<c<<"^2 = "<<c * c<<std::endl;
            c+=2;
        }
    }
}