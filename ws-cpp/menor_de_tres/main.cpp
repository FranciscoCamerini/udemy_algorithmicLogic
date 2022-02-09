#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, y, z, menor;

    cout << "Primeiro valor: ";
    cin >> x;

    cout << "\nSegundo valor: ";
    cin >> y;

    cout << "\nTerceiro valor: ";
    cin >> z;

    if (x < y && x < z){
            menor = x;
        }
    else if (y < z){
        menor = y;
    }
    else{
        menor = z;
    }

    cout << "\nMENOR = " << menor;
    cout << endl;

    return 0;
}
