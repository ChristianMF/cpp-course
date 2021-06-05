/*// 11. Cajero automatico con saldo inicial de 1000

#include <iostream>

using namespace std;

int main() {
    
//    int cajero = 1000, retiro;
//    
//    cout<<"¿Cuando quieres retirar?: ";
//    cin>>retiro;
//    
//    if(retiro <= 1000 && retiro > 0) {
//        cajero -= retiro;
//        cout<<"Ha retirado la cantidad de: "<<retiro<<endl;
//        cout<<"Su saldo restante es de: "<<cajero<<endl;
//    } else {
//        cout<<"Cantidad de retiro fuera de rango"<<endl;
//    }
    
    float saldo = 1000, ingreso, egreso;
    int op;
    
    cout<<"Bievenido al cajero. Elija una opcion: "<<endl;
    cout<<"Opcion 1: ingresar dinero"<<endl;
    cout<<"Opcion 2: egresar dinero"<<endl;
    cout<<"Opcion: "<<endl;
    cin>>op;
    
    switch(op) {
        case 1:
            cout<<"¿Cuanto ingresara?: "<<endl;
            cin>>ingreso;
            saldo+=ingreso;
            cout<<"Saldo: "<<saldo;
            break;
        case 2:
            cout<<"¿Cuanto egresara?: "<<endl;
            cin>>egreso;
            if(egreso <= saldo && egreso>0) {
                saldo-=egreso;
                cout<<"Saldo: "<<saldo;
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