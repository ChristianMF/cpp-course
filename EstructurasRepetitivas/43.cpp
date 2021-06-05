/*// 8. Programa que calcule 1+3+5+...+2n-1

#include <iostream>

using namespace std;

int main() {
    int a, n, acum = 0;
    
    cout<<"Digite un numero: ";
    cin>>a;
    
    n = (2*a)-1;
    
    for(int i=1;i<=n;i+=2) {
        acum += i;
    };
    
    cout<<"Resultado: "<<acum;
    
    return 0;
}*/