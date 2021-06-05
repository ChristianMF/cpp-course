/*// 8. Programa que pide arreglo de 5 numeros. Otro arregla los copia y multiplica x2

#include <iostream>

using namespace std;

int main() {
    
    int a[5], b[5];
    int arrSizeA = *(&a + 1) - a;
    int arrSizeB = *(&b + 1) - b;
    
    for(int i=0;i<arrSizeA;i++) {
        cout<<"Digite el valor del numero "<<(i+1)<<" : ";
        cin>>a[i];
        b[i] = a[i] * 2;
    }
    
    for(int i=0;i<arrSizeB;i++) {
        cout<<b[i];
    }
    
    return 0;
}*/