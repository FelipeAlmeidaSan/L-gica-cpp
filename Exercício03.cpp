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

    double A = pi * raio * raio;
    double P = 2.0 * pi * raio;

    cout << fixed << setprecision(2);
    cout << "Para o raio = " << raio
         << " , a área é " << A << " cm\u00B2"
         << " e o perímetro (circunferência) é " << P << "cm\n";

        return 0;
}
