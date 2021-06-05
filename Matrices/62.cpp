/*// 1. Programa que pida a usuario numero de filas y columnas. Mostrar en pantalla

#include <iostream>

using namespace std;

int main() {
    
    int filas, columnas;
    
    cout<<"¿Cuantas filas?: ";
    cin>>filas;
    cout<<"¿Cuantas columnas?: ";
    cin>>columnas;
    
    int a[filas][columnas];
    
    for(int i=0;i<filas;i++) {
        for(int j=0;j<columnas;j++) {
            cout<<"Digite el valor del numero en la fila "<<(i+1)<<" y columna "<<(j+1)<< " : ";
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<filas;i++) {
        for(int j=0;j<columnas;j++) {
            cout<<"Fila "<<(i+1)<<" y columna "<<(j+1)<< " : "<<a[i][j]<<endl;
        }
    }
    
    return 0;
}*/