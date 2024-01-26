#include <iostream>
#include <vector>
#include <algorithm>

bool verifica_triangulo(float a, float b, float c)
{

    if (a >= (b + c))
    {
        std::cout << "NAO FORMA TRIANGULO" << std::endl;
        return false;
    }
    else

        return true;
}

int main()
{

    float a, b, c, lado[2];
    int i;

    std::vector<float> v;

    std::cin >> lado[0];
    std::cin >> lado[1];
    std::cin >> lado[2];

    for (i = 0; i < 3; i++)
    {
        v.push_back(lado[i]);
    }
    std::sort(v.begin(), v.end(), std::greater<float>());

    a = v[0];
    b = v[1];
    c = v[2];

    if (verifica_triangulo(a, b, c))
    {

        if ((a * a) == ((b * b) + (c * c)))
            std::cout << "TRIANGULO RETANGULO" << std::endl;

        if ((a * a) > ((b * b) + (c * c)))
            std::cout << "TRIANGULO OBTUSANGULO" << std::endl;

        if ((a * a) < ((b * b) + (c * c)))
            std::cout << "TRIANGULO ACUTANGULO" << std::endl;

        if (a == b && b == c && a == c)
            std::cout << "TRIANGULO EQUILATERO" << std::endl;

        if (a == b && a == c && b != c)
            std::cout << "TRIANGULO ISOSCELES" << std::endl;

        if (a == b && a != c && !(b == c))
            std::cout << "TRIANGULO ISOSCELES" << std::endl;
        
        if (a != b && a == c && !(b == c))
            std::cout << "TRIANGULO ISOSCELES" << std::endl;
            
    }

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    return 0;
}