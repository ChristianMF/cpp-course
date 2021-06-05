/*//Oredenacion Quicksort

#include <iostream>

using namespace std;

void quickSort(float a[], int primero, int ultimo) {
    int i, j, central;
    float pivote;

    central = (primero + ultimo) / 2;
    pivote = a[central];
    i = primero;
    j = ultimo;

    do {
        while (a[i] < pivote) {
            i++;
        }
        while (a[j] > pivote) {
            j--;
        }
        if (i <= j) {
            float aux = a[i];
            a[i] = a[j];
            a[j] = aux;
            i++;
            j--;
        }
    } while (i <= j);

    if (primero < j) {
        quickSort(a, primero, j); //ordenamos la lista izquierda
    }
    if (i < ultimo) {
        quickSort(a, i, ultimo); //ordenamos la lista derecha
    }
}

int main() {

    float a[] = {6, 7, 56, 7, 2, 4, 54, 3, 908, 33, 2, 54, 6};
    //float a[] = {4, 7, 1, 8, 2, 10, 5, 9, 3};
    int arrSize = *(&a + 1) - a;


    
//    int central = (arrSize - 1) / 2;
//    int pivote = a[central];
//    
//        for (int i = 0, j = (arrSize - 1); i < (arrSize - 1) / 2, j > (arrSize - 1) / 2; i++, j--) {
//            if (a[i] > pivote) {
//                if (a[j] < pivote) {
//                    int aux = a[i];
//                    a[i] = a[j];
//                    a[j] = aux;
//                } else {
//                    i++;
//                }
//            }
//        }
    //
    //    int j = (arrSize - 1);
    //    for (int i = 0; i <= central; i++) {
    //        if (a[i] > pivote) {
    //            while (a[j] > pivote && j >= central) {
    //                j--;
    //            }
    //            if (a[j] < pivote) {
    //                int aux = a[i];
    //                a[i] = a[j];
    //                a[j] = aux;
    //            }
    //        }
    //    }

    quickSort(a, 0, (arrSize-1));

    for (int i = 0; i < arrSize; i++) {
        cout << a[i] << " ";
    }

    return 0;
}*/