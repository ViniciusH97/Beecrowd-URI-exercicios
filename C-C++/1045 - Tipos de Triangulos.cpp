#include <iostream>

int main(){

    float a, b, c;

    std::cin>>a>>b>>c;

    if(a>=(a+c))
        std::cout<<"NAO FORMA TRIANGULO"<<std::endl;

    if((a*a)==((b*b)+(c*c)))
        std::cout<<"TRIANGULO RETANGULO"<<std::endl;

    if((a*a) > ((b*b) + (c*c)))
        std::cout<<"TRIANGULO OBTUSANGULO"<<std::endl;

    if((a*a) < ((b*b) + (c*c)))
        std::cout<<"TRIANGULO ACUTANGULO"<<std::endl;

    if(a == b && b == c && a == c)
        std::cout<<"TRIANGULO EQUILATERO"<<std::endl;
    
    if(a == b && b != c && c != a)
        std::cout<<"TRIANGULO ISOSCELES"<<std::endl;

    return 0;
}