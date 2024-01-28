#include <iostream>
#include <string>

int main(void) {

    std::string p1, p2, p3;

    std::cin>>p1>>p2>>p3;

    if( p1 == "vertebrado"){
        if(p2 == "ave"){
            if(p3 == "carnivoro"){
                std::cout<<"aguia"<<std::endl;
            }else if(p3 == "onivoro"){
                std::cout<<"pomba"<<std::endl;
            }
        }else{  
            if(p3 == "onivoro"){
                std::cout<<"homem"<<std::endl;
            }else if(p3 == "herbivoro"){
                std::cout<<"vaca"<<std::endl;
            }
        }
    }else{
        if(p2 == "inseto"){
            if(p3 == "hematofago"){
                std::cout<<"pulga"<<std::endl;
            }
            else if(p3 == "herbivoro"){
                std::cout<<"lagarta"<<std::endl;
            }
        }else if(p2 == "anelideo"){
            if(p3 == "hematofago"){
                std::cout<<"sanguessuga"<<std::endl;
            }
            else if(p3 == "onivoro"){
                std::cout<<"minhoca"<<std::endl;
            }
        }
    }
}
