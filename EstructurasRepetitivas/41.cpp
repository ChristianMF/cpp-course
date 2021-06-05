/*//6. Calcular x^y, los dos enteros positivos, sin funcion pow

#include <iostream>

using namespace std;

int main() {
    int x, y, elv = 1;
    
    cout<<"Digite X y Y como enteros positivos: ";
    cin>>x>>y;
    
    for(int i=0;i<y;i++) {
        elv *= x;  
    };
    
    cout<<"Resultado: "<<elv;
            
    return 0;
}*/