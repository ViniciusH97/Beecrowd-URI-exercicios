#include<iostream>
#include<string.h>
#include<iomanip>

int main(void){

    int quantia, input;
    std::string tipo;
    float percentual_coelhos=0, percentual_ratos=0, 
    percentual_sapos, total=0, quantidade_coelho=0, quantidade_rato=0, quantidade_sapo=0;

    std::cin>>quantia;

    for(int i=0;i<quantia;i++){
        std::cin>>input;
        std::cin>>tipo;

        if(tipo == "C"){
            quantidade_coelho += input;
            total += input;

        }else if(tipo == "R"){
            quantidade_rato += input;
            total += input;

        }else if(tipo == "S"){
            quantidade_sapo += input;
            total += input;

        }
    }

    percentual_coelhos = (quantidade_coelho*100.0) / total;
    percentual_ratos = (quantidade_rato*100.0) / total;
    percentual_sapos = (quantidade_sapo*100.0) / total;


    std::cout<<"Total: "<< total <<" cobaias"<<std::endl;
    std::cout<<"Total de coelhos: "<<quantidade_coelho<<std::endl;
    std::cout<<"Total de ratos: "<<quantidade_rato<<std::endl;
    std::cout<<"Total de sapos: "<<quantidade_sapo<<std::endl;

    std::cout<<"Percentual de coelhos: "<<std::fixed<<std::setprecision(2)<<percentual_coelhos<<" %"<<std::endl;
    std::cout<<"Percentual de ratos: "<<std::fixed<<std::setprecision(2)<<percentual_ratos<<" %"<<std::endl;
    std::cout<<"Percentual de sapos: "<<std::fixed<<std::setprecision(2)<<percentual_sapos<<" %"<<std::endl;
}