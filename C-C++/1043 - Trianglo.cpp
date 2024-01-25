#include <iostream>
#include <iomanip>

float perimetro_triangulo(float, float, float);
void area_trapezio(float, float, float);

int main()
{

    float a, b, c, x;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (a + b > c)
        if (b + c > a)
            if (a + c > b)
            {
                x = perimetro_triangulo(a, b, c);
                std::cout << "Perimetro = " << std::fixed << std::setprecision(1) << x << std::endl;
            }
            else
                area_trapezio(a, b, c);
        else
            area_trapezio(a, b, c);
    else
        area_trapezio(a, b, c);

    return 0;
}

float perimetro_triangulo(float a, float b, float c)
{
    float res;

    res = a + b + c;

    return res;
}

void area_trapezio(float a, float b, float c)
{
    float res;

    res = ((a + b) * c) / 2;

    std::cout << "Area = " << std::fixed << std::setprecision(1) << res << std::endl;
}
