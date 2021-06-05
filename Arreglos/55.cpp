/*// 3. Programa que lea un arreglo de numeros. Mostrar cada uno con indice

#include <iostream>

using namespace std;

int main() {
    int a[5];
    int arrSize = *(&a + 1) - a;
    
    for(int i=0;i<arrSize;i++) {
        cout<<"Digite el valor del numero "<<(i+1)<<" : ";
        cin>>a[i];
    }
    
    for(int i=0;i<arrSize;i++) {
        cout<<(i+1)<<". "<<a[i]<<endl;
    }
    
    return 0;
}*/