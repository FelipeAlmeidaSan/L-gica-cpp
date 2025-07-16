// Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double raio;
    cout << "Digite o valor do raio: ";
    cin >> raio;

    const double pi = 3.1415;

        int A = pi * raio * raio;
    cout << "O valor da área dado o raio " << raio << " é de: " << A << '\n';

    double P = 2.0 * pi * raio;
    cout << "O valor do perímetro é igual à " << P << '\n';

    return 0;
}
