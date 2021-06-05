/*// 4. Prgrama que pida elementos de vector y los muestre en indice inverso

#include <iostream>

using namespace std;

int main() {
    
    int a[5];
    int arrSize = *(&a + 1) - a;
    
    for(int i=1;i<=arrSize;i++) {
        cout<<"Digite el valor del numero "<<i<<" : ";
        cin>>a[i-1];
    }
    
    for(int i=arrSize;i>0;i--) {
        cout<<i<<". "<<a[i-1]<<endl;
    }
    
    return 0;
}*/