/*//Ordenacion shell

#include <iostream>

using namespace std;

int main() {

    //int a[] = {6,4,3,6,7,8,7,4,3,940};
    int a[] = {1, 3, 4, 5, 2};
    int arrSize = *(&a + 1) - a;
    int salto = arrSize / 2;

    //    while(salto > 0) {
    //        int count = 0;
    //        for(int i=0;i<arrSize;i++) {
    //            if((i+salto) < (arrSize)){
    //                if(a[i] > a[i+salto]) {
    //                    int mayor = a[i];
    //                    a[i] = a[i+salto];
    //                    a[i+salto] = mayor;
    //                    count++;
    //                }
    //            }
    //        }
    //        
    //        if(count == 0) {
    //            salto/=2;
    //        }
    //    }

    while (salto > 0) {
        for (int i = salto; i < arrSize; i++) {
            int j = i - salto;
            while (j <= 0) {
                int k = j + salto;
                if (a[j] <= a[k]) { //ordenado
                    j = -1;
                } else { //desordenado
                    int mayor = a[j];
                    a[j] = a[k];
                    a[k] = mayor;
                    j -= salto;
                }
            }
        }
        salto/=2;
    }

    //Ordenamiento ascendente
    for (int i = 0; i < arrSize; i++) {
        cout << a[i] << " ";
    }

    return 0;
}*/