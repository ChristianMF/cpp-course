/*// 1. Pedir cadena. Si supera de 10 carac mostrar en pantalla

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char palabra[10];

    cout << "Digite una cadena de almennos 10 caracteres: ";
    cin.getline(palabra, 10, '\n');
    
//    while (!(strlen(palabra) > 10)) {
//        cout << "Cadena de menos de 10 caracteres";
//        cout << "Digite una cadena de almennos 10 caracteres: ";
//        cin.getline(palabra, 10, '\n');
//    }

    if(strlen(palabra) < 10) {
        cout << "La palabra tiene menos de 10 caracteres";
    } else {
        cout << "La cadena dice: " << palabra;
    }

    return 0;
}*/