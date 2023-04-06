#ifndef LAB2_SQUAREEQUATION_H
#define LAB2_SQUAREEQUATION_H

class squareEquation
{
private:
    double a;
    double b;
    double c;

public:
    squareEquation(double x, double y, double z);
    double calculation(double number); // вычесление значения в заданной точке
    short countRoot(); // нахождения количества корней
    void roots(); // нахождение корней
    double min(); // поиск минимального значения функции
    void print(); // вывод квадратного уравнения

};
#endif //LAB2_SQUAREEQUATION_H

