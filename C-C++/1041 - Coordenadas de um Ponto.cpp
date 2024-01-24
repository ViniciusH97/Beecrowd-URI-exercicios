#include <iostream>

int main(){

    float eixo_x, eixo_y;

    std::cin>>eixo_x;
    std::cin>>eixo_y;

    if(eixo_x > 0 && eixo_y > 0)
        std::cout<<"Q1"<<std::endl;
    else if(eixo_x >= 1 && eixo_y < 1)
        std::cout<<"Q4"<<std::endl;
    else if(eixo_x < 0 && eixo_y > 0)
        std::cout<<"Q2"<<std::endl;
    else if(eixo_x < 0 && eixo_y < 0)
        std::cout<<"Q3"<<std::endl;
    else if(eixo_x == 0 && eixo_y == 0)
        std::cout<<"Origem"<<std::endl;
    else if(eixo_x == 0 && eixo_y > 1)
        std::cout<<"Eixo Y"<<std::endl;
    else if(eixo_x > 1 && eixo_y == 0)
        std::cout<<"Eixo X"<<std::endl;
    else if(eixo_x == 0 && eixo_y < 1)
        std::cout<<"Eixo Y"<<std::endl;
    else if(eixo_x < 1 && eixo_y == 0)
        std::cout<<"Eixo X"<<std::endl;

    return 0;
}