#include <iostream>

int main(void){

    int i, j, c=0;

    for(i = 1, j=7; j >= 0; j-=1){
        if(c != 3){
            std::cout<<"I=" << i;
            c+=1;
        }else{
            i+=2;
        }
        
        std::cout<<" J="<<j<<std::endl;

        if(j == 5){
            j=7;
        }
    }
}
