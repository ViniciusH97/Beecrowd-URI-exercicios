#include <iostream>

int main(){
    int inicio, fim, dia = 24, duracao = 0;

    std::cin >> inicio >> fim;

    if (inicio >= fim){
        duracao = (dia - inicio) + fim;
    }

    if (inicio < fim){
        duracao = fim - inicio;
    }

    std::cout << "O JOGO DUROU " << duracao << " HORA(S)" << std::endl;

    return 0;
}