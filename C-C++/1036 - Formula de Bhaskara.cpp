#include<iostream>
#include<cmath>
#include<iomanip>

int main(void){

    double a, b, c, delta;

    std::cin>>a>>b>>c;

    delta = (b*b) - (4*a)*c;

    if(delta > 0 && a != 0)
    {
        double r1 = (-b +sqrt(delta))/(2*a);
        double r2 = (-b -sqrt(delta))/(2*a);

        std::cout<<std::fixed<<std::setprecision(5)<<"R1 = "<<r1<<std::endl;
        std::cout<<std::fixed<<std::setprecision(5)<<"R2 = "<<r2<<std::endl;
    }
    else
    {
        std::cout<<"Impossivel calcular"<<std::endl;
    }

}