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
    {
        return true;
    }
}

int main()
{
    std::vector<float> v(3);

    for (int i = 0; i < 3; i++)
    {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end(), std::greater<float>());

    float a = v[0];
    float b = v[1];
    float c = v[2];

    if (verifica_triangulo(a, b, c))
    {

        if ((a * a) == ((b * b) + (c * c)))
            std::cout << "TRIANGULO RETANGULO" << std::endl;

        if ((a * a) > ((b * b) + (c * c)))
            std::cout << "TRIANGULO OBTUSANGULO" << std::endl;

        if ((a * a) < ((b * b) + (c * c)))
            std::cout << "TRIANGULO ACUTANGULO" << std::endl;

        if (a == b || a == c || b == c)
        {
            if (a == b && b == c)
                std::cout << "TRIANGULO EQUILATERO" << std::endl;
            else
                std::cout << "TRIANGULO ISOSCELES" << std::endl;
        }

    }

    return 0;
}