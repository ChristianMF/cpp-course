/*// 7. Determinar si matrz es simetrica o no. Matriz simetrica = cuadrada e igual a transpuesta

#include <iostream>

using namespace std;

int main() {

    int rows, cols, count;

    //Pedir columnas
    cout << "¿Cuantas filas? : ";
    cin>>rows;
    cout << "¿Cuantas columnas? : ";
    cin>>cols;

    //Determinar si matiz es cuadreada
    if (rows != cols) {
        while (rows != cols) {
            cout << "No es una matiz cuadrada. Por favor digite una cuadrada" << endl;
            cout << "¿Cuantas filas? : ";
            cin>>rows;
            cout << "¿Cuantas columnas? : ";
            cin>>cols;
        }
    }
    
    int a[rows][cols], b[rows][cols];
    rows = sizeof a / sizeof a[0];
    cols = sizeof a[0] / sizeof (int);
    
    //Llenar matriz principal
    cout<<"Matiz principal"<<endl;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout<<"Digite el valor para la fila "<<(i+1)<<" y columna "<<(i+j)<<" : ";
            cin>>a[i][j];
        }
    }
    
    //Mostrar matriz principal
    cout<<"Matiz principal"<<endl;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    //Calcular transpuesta
    cout<<"Matiz transpuesta"<<endl;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            b[i][j] = a[j][i];
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    //Determinar si principal es igual a transpuesta
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            if(a[i][j] != b[i][j]) {
                count++;
            }
        }
    }
    
    if(count != 0) {
        cout<<"No es simetrica";
    } else {
        cout<<"Sí es simetrica";
    }

    return 0;
}*/