/*// 11. Calcular 2^1 + 2^2 + 2^3 + ... + 2^n

#include <iostream>

using namespace std;

int main() {
    int a, base = 2, acumBase = 1, acum = 0;
    
    cout<<"Digite un numero: ";
    cin>>a;
    
    for(int i=1;i<=a;i++) {
        acumBase *= base;
        acum += acumBase;
    };
    
    cout<<"Resultado: "<<acum;
    
    return 0;
}*/