/*// 6. Calcular si numero en vector es igual a la suma del resto de numeros

#include <iostream>

using namespace std;

int main() {
    
    int a[5], acum = 0;
    int arrSize = *(&a + 1) - a;
    
    for(int i=1;i<=arrSize;i++) {
        cout<<"Digite el valor del numero "<<i<<" : ";
        cin>>a[i-1];
    }
    
    for(int i=1;i<=arrSize;i++) {
        for(int j=1;j<=arrSize;j++) {
            if((i-1) != (j-1)) {
                acum += a[j-1];
            }
        }
        cout<<acum<<endl;
        if(a[i-1] == acum) {
            cout<<"Sí hay un numero que es igual a la suma del resto "<<i<<". "<<a[i-1]<<endl;
        } else if(a[i-1] < acum) {
            cout<<"La suma del resto de numeros es mayor "<<i<<". "<<a[i-1]<<endl;
        } else {
            cout<<"La suma del resto de numeros es menor "<<i<<". "<<a[i-1]<<endl;
        }
        acum = 0;
    }
    
    return 0;
}*/