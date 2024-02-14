#include <iostream>

int main(void){

    int i, j;

    for(i = 1, j=60; j >= 0; i += 3, j-=5){
        std::cout << "I=" << i << " J=" << j << std::endl;
    }
}
