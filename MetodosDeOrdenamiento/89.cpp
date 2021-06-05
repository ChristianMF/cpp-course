/*//Método burbuja

#include <iostream>

using namespace std;

int main() {
    int numeros[] = {4, 1, 2, 3, 5}, aux;

//    for (int i = 0; i < 5; i++) {
//        aux = numeros[i];
//        if ((i + 1) != 5) {
//            for (int j = i + 1; j < 5; j++) {
//                if (aux > numeros[j]) {
//                    numeros[j - 1] = numeros[j];
//                } else {
//                    numeros[j - 1] = aux;
//                    break;
//                }
//
//            }
//        }
//    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if(numeros[j] > numeros[j+1]) {
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}*/