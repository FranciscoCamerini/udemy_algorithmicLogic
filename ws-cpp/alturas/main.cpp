#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, dz6;
    double altura, somaA, media;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    int idade[n];
    string nome[n];

        somaA = 0;
        dz6 = 0;
    for (int i = 0; i < n; i++ ){
        cout << "\nDados da " << i+1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);

        cout << "Idade: ";
        cin >> idade[i];
        if (idade[i] < 16){
            dz6++;
        }

        cout << "Altura: ";
        cin >> altura;
        somaA = somaA + altura;
        media = somaA / n;
    }
    cout << fixed << setprecision(2);
    cout << "\nAltura media: " << media;
    cout << "\nPessoas com menos de 16 anos: " << dz6 * 100 / n << "%" << endl;
    for ( int x = 0; x < n; x++){
        if (idade[x] < 16){
            cout << nome[x];
        }
    }

    return 0;

}
