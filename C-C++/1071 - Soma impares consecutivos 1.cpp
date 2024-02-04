#include <iostream>

int main() {
    int x, y, soma;

    std::cin>>x>>y;
    
    if (x > y) {
        int aux = x;
        x = y;
        y = aux;
    }

    for (int i=x+1; i<y; ++i) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    std::cout<< soma << std::endl;

    return 0;
}
