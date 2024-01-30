#include <iostream>
#include <array>

int main(void){

    std::array<std::string, 12> meses = {"January", "February", "March", "April", "May", 
        "June", "July", "August", "September", "October", "November", "December"};

    int mes;

    std::cin >> mes;

    if(mes >= 1 && mes <= 12){
        std::cout<< meses[mes - 1]<<std::endl;
    }else
        return EXIT_SUCCESS;
    
}