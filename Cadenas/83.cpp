/*// 7. Pedir nombre en mayuscula, si comienza con A, convertir a minuscula, otro caso no convertir

#include <iostream>
#include <string.h>

using namespace std;

int main() {

    char nombre[40];

    cout << "Digite su nombre: ";
    cin.getline(nombre, 40, '\n');

    //    for(int i=0;i<strlen(nombre);i++) {
    //        if(i==0 && (nombre[i]=='a' || nombre[i]=='A')) {
    //            for(int i=0;i<strlen(nombre);i++) {
    //                nombre[i] = tolower(nombre[i]);
    //            }
    //        } else {
    //            break;
    //        }
    //    }

    if (strncmp(nombre, "A", 1) == 0) {
        for (int i = 0; i < strlen(nombre); i++) {
            nombre[i] = tolower(nombre[i]);
        }
    }

    cout << nombre << endl;

    return 0;
}*/