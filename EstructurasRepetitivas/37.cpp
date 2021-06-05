/*// 2. Leer numeros hasta que aparesca un cero. Termina y da el numero de valores introducidos mayores a 0

#include <iostream>

using namespace std;

int main() {
    
    int i = 0;
    float num;
    
//    do {
//        cout<<"Introduzca un numero diferente a 0: ";
//        cin>>num;
//        i++;
//    } while(num != 0);
    
    while(num != 0) {
        cout<<"Introduzca un numero diferente a 0: ";
        cin>>num;
        if (num!=0) {
            i++;
        }
    }
    
    cout<<i;
    
    return 0;
}*/