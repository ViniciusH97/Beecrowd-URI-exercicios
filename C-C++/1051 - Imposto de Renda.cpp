#include<iostream>
#include<iomanip>

int main(void){

    float salario, imposto, restante, parametro;

    std::cin>>salario;


    if(salario >= 0 && salario <= 2000.00){
        std::cout<<"isento"<<std::endl;
    }else if(salario >= 2000.01 && salario <= 3000.00){
        salario -= 2000;
    
    }else if(salario >= 3000.01 && salario <= 4500.00){
        salario -= 2000;
        if(salario != 1000.00){
            restante = salario - 1000.00;
            salario -= restante;
        }
        imposto = salario * 0.08;
        imposto = imposto + (restante * 0.18);

        std::cout<<"R$ "<< std::fixed<< std::setprecision(2) <<imposto<<std::endl;

    }else{
        salario -= 2000;
        if(salario != 2000.00){
            restante = salario - 2000.00;
            salario -= restante;
        }

        imposto = salario * 0.08;
        imposto = imposto + (restante * 0.18);

        std::cout<<"R$ "<< std::fixed<< std::setprecision(2) <<imposto<<std::endl;
    }


}