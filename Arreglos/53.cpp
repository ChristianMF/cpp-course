/*// 1. Programa que define vector de numeros y calcule suma

#include <iostream>

using namespace std;

int main() {
    
    int a[] = {1,2,4}, suma = 0;
    int arrSize = *(&a + 1) - a;
    
    for(int i=0;i<arrSize;i++) {
        suma += a[i];
    }
    
    cout<<"Resultado: "<<suma;
    
    return 0;
}*/