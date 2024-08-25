#include <iostream>
#include <iomanip>

int main(){

    double nota[4], media, nota_exame;
    int i;
    for(i=0; i<4; i++)
    {
        std::cin>>nota[i];
    }

    double t = (nota[0] * 2)+ (nota[1] * 3) + (nota[2] * 4)+ nota[3];
    media = t/10;

    std::cout<<"Media: "<< std::fixed <<std::setprecision(1) << media << std::endl;

    if (media >= 7.0)
    {
        std::cout<<"Aluno aprovado."<<std::endl;
    }
    else if(media < 5.0)
    {
        std::cout<<"Aluno reprovado."<<std::endl;
    }
    else if(media >= 5.0 && media <= 6.9)
    {
        std::cout<<"Aluno em exame."<<std::endl;

        std::cin>>nota_exame;
        std::cout<<"Nota do exame: "<< std::fixed << std::setprecision(1)<< nota_exame << std::endl;

        media = (media + nota_exame)/2;

        if(media >= 5.0)
        {
            std::cout<<"Aluno aprovado."<<std::endl;
        }
        else if(media >= 4.9)
        {
            std::cout<<"Aluno reprovado."<<std::endl;
        }

        std::cout<<"Media final: "<< std::setprecision(1) << media << std::endl;
    }

    return 0;   
}