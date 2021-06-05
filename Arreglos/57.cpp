/*// 5. Leer vector y determinar mayor

#include <iostream>

using namespace std;

int main() {
    int a[5], mayor = 0;
    int arrSize = *(&a + 1) - a;
    
    for(int i=1;i<=arrSize;i++) {
        cout<<"Digite el valor del numero "<<i<<" : ";
        cin>>a[i-1];
    }
    
    for(int i=1;i<=arrSize;i++) {
        if(a[i-1] > mayor) {
            mayor = a[i-1];
        }
    }
    
    cout<<"El mayor: "<<mayor;
    
    return 0;
}*/