/*// 9. Programa que lea cadena y muestre ocurrencias de cada vocal

#include <iostream>
#include <string.h>

using namespace std;

int main() {

    char a[] = {'a', 'e', 'i', 'o', 'u'}, palabra[40], palabra1[40];
    int index[] = {0, 0, 0, 0, 0};

    cout << "Digite una frase: ";
    cin.getline(palabra, 40, '\n');
    strcpy(palabra1, palabra);

    //Pasar a lowercase
    for (int i = 0; i < strlen(palabra1); i++) {
        palabra1[i] = tolower(palabra1[i]);
    }

    //Bucar vocales
    for (int i = 0; i < strlen(palabra1); i++) {
        for (int j = 0; j < strlen(a); j++) {
            if (palabra1[i] == a[j]) {
                index[j]++;
            }
        }
    }

    //Imprimir vocales
    cout << "La palabra " << palabra << " tiene las siguientes vocales: " << endl;
    for (int i = 0; i < strlen(a); i++) {
        if (index[i] != 1) {
            cout << a[i] << " se presenta " << index[i] << " veces" << endl;
        } else {
            cout << a[i] << " se presenta " << index[i] << " vez" << endl;
        }
    }


    return 0;
}*/