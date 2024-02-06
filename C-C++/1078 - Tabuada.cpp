#include <iostream>

int main(void){

    int n, res=0;

    std::cin>>n;

    for(int i=1;i<=10;i++){
        res = n * i;
        std::cout<<i<<" x "<<n<<" = "<<res<<std::endl;  
    }
}