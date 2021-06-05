/*// 7. Definir dos vectores de caracteres. Definir uno tercero con los caracteres de los otros

#include <iostream>

using namespace std;

int main() {
    
    char a[5], b[5];
    int arrSizeA = *(&a + 1) - a;
    int arrSizeB = *(&b + 1) - b;
    
    cout<<"Digite 10 caracteres para el primer arreglo: ";
    cin>>a;
    
    cout<<"Digite 10 caracteres para el segundo arreglo: ";
    cin>>b;
    
    char c[arrSizeA+arrSizeB];
    int arrSizeC = *(&c + 1) - c;
    cout<<arrSizeC;
    
    for(int i=0;i<arrSizeA;i++) {
        c[i]=a[i];
        cout<<c[i];
        if((i+1) == arrSizeA) {
            for(int j=arrSizeB,k=0;j>0;j--,k++) {
                c[arrSizeA+(j-1)]=b[k];
                cout<<c[arrSizeA+(j-1)];
            }
        }
    }
    
//    for(int i=0;i<arrSizeC;i++) { 
//        cout<<c[i];
//    }
    
    return 0;
}*/