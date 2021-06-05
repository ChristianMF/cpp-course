/*// 5. Programa que reciba nuemros hasta que se encuentre valores en rang 20-30
// o hasta que encuentre 0. Entrega la suma de valores introducidos

#include <iostream>

using namespace std;

int main() {
    
    int i = 0;
    float num;
    
    while((num != 0) && (num < 20 || num > 30)) {
        cout<<"Digite un numero diferente a 0 y no en rango 20-30: ";
        cin>>num;
        if((num != 0) && (num < 20 || num > 30)) {
            i ++;
        }
    }
    
    cout<<"Reultado: "<<i<<endl;
    
    return 0;
}*/