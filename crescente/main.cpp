#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, y;

    cout << "Digite dois numeros" << endl;
    cin >> x;
    cin >> y;
    if (x < y){
        cout << "CRESCENTE" << endl;
    }
    else {
        cout << "DECRESCENTE" << endl;
    }

    while (x != y){
        cout << "Digite outros dois numeros: " << endl;
        cin >> x;
        cin >> y;
        if (x < y){
        cout << "CRESCENTE" << endl;
        }
        else if (x > y) {
        cout << "DECRESCENTE" << endl;
        }
    }

    return 0;
}
