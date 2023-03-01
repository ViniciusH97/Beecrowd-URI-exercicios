#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int distancia;
    double gasto, consumo;

    cin >> distancia >> gasto;

    consumo = distancia/gasto;

    cout << fixed << setprecision(3);

    cout << consumo << " km/l" << endl;

    return 0;
}