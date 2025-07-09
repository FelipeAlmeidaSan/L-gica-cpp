// Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro

/*
A área de um retângulo é calculada multiplicando a base (b) pela altura (h), ou seja, A = b * h. O perímetro de um retângulo é a soma de todos os seus lados, ou duas vezes a soma da base com a altura, ou seja, P = 2 * (b + h).
Fórmulas:
Área (A): A = b * h
Perímetro (P): P = 2 * (b + h)

Exemplo:
Se um retângulo tem base (b) = 10 cm e altura (h) = 5 cm:
Área: A = 10 cm * 5 cm = 50 cm²
Perímetro: P = 2 * (10 cm + 5 cm) = 2 * 15 cm = 30 cm  */

#include <iostream>

int main()
{
    int b = 10;
    int h = 5;
    int A = b * h;
    int P = 2 * (b + h);

    std::cout << A << '\n';
    std::cout << P << '\n';

    return 0;
}