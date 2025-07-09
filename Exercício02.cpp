// Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo.

#include <iostream>
#include <iomanip>

int main()
{
    double ladoA;

    std::cout << "Digite o valor do lado do quadrado: ";
    std::cin >> ladoA; // lê lado do usuário

    double A = ladoA * ladoA;
    double P = 4 * ladoA;

    // Controle de casas decimais
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Dados o lado = " << ladoA
              << " , a área é " << A << " cm\u00B2"
              << " e o perímetro é " << P << " cm\n";

    return 0;
}
