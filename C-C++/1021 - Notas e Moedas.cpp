#include <iostream>
#include <iomanip>

int main()
{

    double valor, moeda_um_real, moeda_cinquenta, moeda_vintecinco, moeda_dez, moeda_cinco, moeda_um;
    int nota_cem, nota_cinquenta, nota_vinte, nota_dez, nota_cinco, nota_dois;

    std::cin >> valor;
    int valor_inteiro = static_cast<int>(valor);

    double centavos = valor - valor_inteiro;
    int centavosInt = static_cast<int> (centavos * 100);

    nota_cem = valor_inteiro / 100;
    int rest_cem = valor_inteiro % 100;
    nota_cinquenta = rest_cem / 50;
    int rest_cinquenta = rest_cem % 50;
    nota_vinte = rest_cinquenta / 20;
    int rest_vinte = rest_cinquenta % 20;
    nota_dez = rest_vinte / 10;
    int rest_dez = rest_vinte % 10;
    nota_cinco = rest_dez / 5;
    int rest_cinco = rest_dez % 5;
    nota_dois = rest_cinco / 2;
    int rest_dois = rest_cinco % 2;

    std::cout << "NOTAS:" << std::endl;
    std::cout << nota_cem << " nota(s) de R$ 100.00" << std::endl;
    std::cout << nota_cinquenta << " nota(s) de R$ 50.00" << std::endl;
    std::cout << nota_vinte << " nota(s) de R$ 20.00" << std::endl;
    std::cout << nota_dez << " nota(s) de R$ 10.00" << std::endl;
    std::cout << nota_cinco << " nota(s) de R$ 5.00" << std::endl;
    std::cout << nota_dois << " nota(s) de R$ 2.00" << std::endl;

    moeda_um_real = rest_dois / 1;
    moeda_cinquenta = centavosInt / 50;
    int rest_mcinquenta = centavosInt % 50;
    moeda_vintecinco = rest_mcinquenta / 25;
    int rest_mvintecinco = rest_mcinquenta % 25;
    moeda_dez = rest_mvintecinco / 10;
    int res_mdez = rest_mvintecinco % 10;
    moeda_cinco = res_mdez / 5;
    int res_mcinco = res_mdez % 5;
    moeda_um = res_mcinco / 1;
    
    std::cout << "MOEDAS:" << std::endl;
    std::cout << moeda_um_real << " moeda(s) de R$ 1.00" << std::endl;
    std::cout << moeda_cinquenta << " moeda(s) de R$ 0.50" << std::endl;
    std::cout << moeda_vintecinco << " moeda(s) de R$ 0.25" << std::endl;
    std::cout << moeda_dez << " moeda(s) de R$ 0.10" << std::endl;
    std::cout << moeda_cinco << " moeda(s) de R$ 0.05" << std::endl;
    std::cout << moeda_um << " moeda(s) de R$ 0.01" << std::endl;

    return 0;
}