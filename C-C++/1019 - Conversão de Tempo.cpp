#include<iostream>

using namespace std;

int main(){
    int inseg, s, m, h, resto;

    cin >> inseg;

    h = inseg/3600;
    resto = inseg%3600;
    m = resto/60;
    s = resto%60;

    cout << h << ":";
    cout << m << ":";
    cout << s<< endl;

    return 0;
}