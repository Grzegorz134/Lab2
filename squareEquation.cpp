#include "squareEquation.h"
#include "iostream"
#include "cmath"

squareEquation::squareEquation(double x, double y, double z)
{
    a = x;
    b = y;
    c = z;
}

short squareEquation::countRoot() // нахождения количества корней
{
    if ((b*b - 4*a*c) > 0)
        return 2;
    else if ((b*b - 4*a*c) == 0)
        return 1;
    else
        return 0;
}

double squareEquation::calculation(double number) // вычесление значения в заданной точке
{
    return a * (number * number) + b * number + c;
}

void squareEquation::roots() // нахождение корней
{
    if ((b*b - 4*a*c) > 0)
        std::cout << (-b + sqrt((b*b - 4*a*c))) / 2 << " " << (-b - sqrt((b*b - 4*a*c))) / 2 << std::endl;

    else if ((b*b - 4*a*c) == 0)
        std::cout << -b/2 << std::endl;

    else
        std::cout << "None" << std::endl;
}

double squareEquation::min() // поиск минимального значения функции
{
    return a * ((-b / (a*2))*(-b / (a*2))) + b * (-b / (a*2)) + c;
}

void squareEquation::print() // вывод квадратного уравнения
{
    if (a == 1)
        std::cout << "x^2";
    else
        std::cout << a << "x^2";

    if (b > 0)
        std::cout << " + " << b << "x";
    else
        std::cout << " - " << -b << "x";

    if (c > 0)
        std::cout << " + " << c;
    else
        std::cout << " - " << -c;

    std::cout << std::endl;
}
