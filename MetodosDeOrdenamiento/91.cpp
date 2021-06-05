/*//Ordenamiento por seleccion

#include <iostream>

using namespace std;

int main() {
    
    //int a[] = {90,4,3,1,67,7,3,6,4};
    //int a[] = {4,3,4,1,5};
    int a[] = {3,2,1,5,4};
    int arrSize = *(&a + 1) - a;
    
    for(int i=0;i<arrSize;i++) {
        int menor = a[i];
        for(int j=0;j<arrSize;j++) {
            if(a[j] > menor) {
                menor = a[j];
                a[j] = a[i];
                a[i] = menor;
            }
        }
    }
    
    //Orden ascentende
    for(int i=0;i<arrSize;i++) {
        cout<<a[i]<<" ";
    }
    
    cout<<"\n";
    
    //Orden descentente
    for(int i=(arrSize-1);i>=0;i--) {
        cout<<a[i]<<" ";
    }
    
    return 0;
}*/