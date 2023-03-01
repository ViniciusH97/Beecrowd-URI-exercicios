#include<iostream>
using namespace std;

int main(){

    int valor, i;

    cin >> valor;

    if(valor < 1000000 && valor > 0){
        
        cout << valor << "\n";

        int nota100 = valor/100;
        int resto100 = valor%100;

        int nota50 = resto100/50;
        int resto50 = resto100%50;

        int nota20 = resto50/20;
        int resto20 = resto50%20;

        int nota10 = resto20/10;
        int resto10 = resto20%10;

        int nota5 = resto10/5;
        int resto5 = resto10%5;

        int nota2 = resto5/2;
        int resto2 = resto5%2;

        int nota1 = resto2/1;
        int resto1 = resto2%1;

        cout << nota100 << " nota(s) de R$ 100,00" << endl;
        cout << nota50 << " nota(s) de R$ 50,00" << endl;
        cout << nota20 << " nota(s) de R$ 20,00" << endl;
        cout << nota10 << " nota(s) de R$ 10,00" << endl;
        cout << nota5 << " nota(s) de R$ 5,00" << endl;
        cout << nota2 << " nota(s) de R$ 2,00" << endl;
        cout << nota1 << " nota(s) de R$ 1,00" << endl;

    }
    else{

        cout << "Quantidade não suportada!" << endl;

    }
    return 0;
}