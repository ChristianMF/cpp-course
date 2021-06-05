/*// 2.Definir vector de numeros y calcule multiplicacion acumulada

#include <iostream>

using namespace std;

int main() {
    int a[] = {1,2,4}, mult = 1;
    int arrSize = *(&a + 1) - a;
    
    for(int i=0;i<arrSize;i++) {
        mult*=a[i];
    }
    
    cout<<"Resultado: "<<mult;
    
    return 0;
}*/