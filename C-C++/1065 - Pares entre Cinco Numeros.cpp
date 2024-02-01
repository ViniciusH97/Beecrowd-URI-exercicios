#include<iostream>

int main(void){

    int i, num, cont_par;
    
    for(i=0;i<5;i++){
        std::cin>>num;

        if(num%2 == 0){
            cont_par++;
        }
    }

    std::cout<<cont_par<<" valores pares"<<std::endl;

}