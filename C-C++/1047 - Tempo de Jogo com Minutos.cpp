#include <iostream>

int main() {
    int hr_ini, min_ini, hr_fin, min_fin, duracao_hrs = 0, duracao_mins = 0;

    std::cin >> hr_ini >> min_ini >> hr_fin >> min_fin;

    if (hr_ini == hr_fin && min_ini == min_fin){
        duracao_hrs = 24;
    }
    else{
        duracao_hrs = (hr_fin - hr_ini + 24) % 24;
        duracao_mins = (min_fin - min_ini + 60) % 60;

        if (min_fin < min_ini){
            duracao_hrs = (duracao_hrs - 1 + 24) % 24;
        }
    }

    std::cout << "O JOGO DUROU " << duracao_hrs << " HORA(S) E " << duracao_mins << " MINUTO(S)" << std::endl;

    return 0;
}
