/*// 12. Calcular 1-2+3-4+5-...n

#include <iostream>

using namespace std;

int main() {
    
    int a, acum = 0;
    
    cout<<"Digite un numero: ";
    cin>>a;
    
    for(int i=1;i<=a;i++) {
        if(i%2==0) {
            acum-=i;
        } else {
            acum+=i;
        }
    };
    
    cout<<"Resultado: "<<acum;
    
    return 0;
}*/