#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "Qual a ordem da matriz? ";
    cin >> n;
    int mat[n][n], negativo;


        negativo = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "\nElemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
            if (mat[i][j] < 0){
                negativo++;
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
                if (i == j){
                    cout << mat[i][j] << " ";
                }
        }
    }
    cout << "\nQuantidade de negativos = " << negativo << endl;
    cout << endl;


    return 0;
}
