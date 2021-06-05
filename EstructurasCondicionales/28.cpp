/*// 8. Digitar 3 numeros. Pedir uno mas y ver si es igual a uno de los anteriores

#include <iostream>

using namespace std;

int main() {
    float a,b,c,d;
    
    cout<<"Digite 3 numeros: ";
    cin>>a>>b>>c;
    
    cout<<"Digite 1 numero más: ";
    cin>>d;
    
    if(d == a && d == b && d == b) {
        cout<<"Los cuatro numeros son iguales";
    } else if(d == a && d == b || d == a && d == c || d == c && d == b) {
        cout<<"Tres numeros son iguales";
    } else if(d == a || d == b || d == c) {
        cout<<"Dos numeros son iguales";
    } else {
        cout<<"Ningun numero es igual a otro";
    }
    
    
    return 0;
}*/