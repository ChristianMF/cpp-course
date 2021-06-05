/*//2. Leer 3 número y determinar el mayor

#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    
    cout<<"Digite el primer numero: ";
    cin>>a;
    cout<<"Digite el segundo numero: ";
    cin>>b;
    cout<<"Digite el tercer numero: ";
    cin>>c;
    
    if(a == b && b == c) {
        cout<<"Son iguales";
    } else if (a > b && a > c) {
        cout<<"El primer numero es mayor";
    } else if (a < b && b > c) {
        cout<<"El segundo numero es mayor";
    } else if (c < b && c > a) {
        cout<<"El tercero numero es mayor";
    }else {
        cout<<"Dos son igual";
    }
    
    return 0;
}*/