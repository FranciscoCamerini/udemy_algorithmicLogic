#include <bits/stdc++.h>

using namespace std;

int main()
{

    double base, altura, area, perimetro, diagonal;

    cout << "Base do retangulo: ";
    cin >> base;

    cout << "\nAltura do retangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2*(base + altura);
    diagonal = sqrt(base*base + altura*altura);

    cout << fixed << setprecision(4);
    cout << "\nAREA = " << area;
    cout << "\nPERIMETRO = " << perimetro;
    cout << "\nDIAGONAL = " << diagonal;
    cout << endl;

    return 0;
}
