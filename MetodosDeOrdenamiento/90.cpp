/*// Ordenamiento por insercion

#include <iostream>

using namespace std;

int main() {

    //int a[] = {4, 7, 2, 6, 1, 2, 10, 12, 16};
    int a[] = {4,2,3,1,5};
    int arrSize = *(&a + 1) - a;

    for (int i = 0; i < arrSize; i++) {
        for (int j = 0; j < arrSize; j++) {
            if(j!=0) {
                if(a[j] < a[j-1]) {
                    int k = a[j];
                    a[j] = a[j-1];
                    a[j-1] = k;
                }
            }
        }
    }
    
    //Ordenamiento ascendente
    for (int i = 0; i < arrSize; i++) {
        cout<<a[i]<<" ";
    }
    
    cout<<"\n";
    
    //Ordenamiento desendente
    for (int i = (arrSize-1); i >= 0; i--) {
        cout<<a[i]<<" ";
    }

    return 0;
}*/