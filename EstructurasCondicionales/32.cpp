/*// 12. Menu con las siguientes opciones:
// 1. cubo de numero
// 2. numero par o impar
// 3. salir

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    float numero;
    int op, num;
    
    cout<<"Bienvenido. Escoja una opcion: "<<endl;
    cout<<"1. Calcular cubo de un numero"<<endl;
    cout<<"2. Calcular si un numero es par o impar"<<endl;
    cout<<"3. Salir"<<endl;
    cin>>op;
    
    switch(op) {
        case 1:
            cout<<"Digite un numero para el calculo del cubo del mismo: ";
            cin>>numero;
            numero = pow(numero,3);
            cout<<"Resultado: "<<numero;
            break;
        case 2:
            cout<<"Digite un numero para el determinar si es par o impar: ";
            cin>>num;
            if(num%2==0) {
                cout<<"El numero es par";
            } else {
                cout<<"El numero es impar";
            }
            break;
        case 3:
            cout<<"Hasta luego";
            break;
        default:
            cout<<"Fuera de rango";
            break;
    }
    
    
    return 0;
}*/