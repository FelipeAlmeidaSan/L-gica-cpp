// Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo.

#include <iostream>

int main()
{

    int ladoA = 5;
    int A = ladoA * ladoA;
    int P = ladoA * 4;

    std::cout << A << '\n';
    std::cout << P << '\n';

    return 0;
}