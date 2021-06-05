// 8. Programa que calcule el producto de 2 matices 3x3

#include <iostream>

using namespace std;

int main() {

    int a[3][3], b[3][3], acum = 0;
    int rows = sizeof a / sizeof a[0];
    int cols = sizeof a[0] / sizeof (int);

    //Llenar primera matriz
    cout << "Primera matriz" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Digite el valor para la fila " << (i + 1) << " y columna " << (j + 1) << " : ";
            cin >> a[i][j];
        }
    }

    //Llenar segunda matriz
    cout << "Segunda matriz" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Digite el valor para la fila " << (i + 1) << " y columna " << (j + 1) << " : ";
            cin >> b[i][j];
        }
    }

    //Imprime primera
    cout << "Primera" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    //Imprime segunda
    cout << "Segunda" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }

    //Calculo de producto
    cout << "Calculo de producto" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < cols; k++) {
                acum += a[i][k] * b[k][j];
            }
            cout << acum << " ";
            acum = 0;
        }
        cout << "\n";
    }






    return 0;
}