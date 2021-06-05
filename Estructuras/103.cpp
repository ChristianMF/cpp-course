/*// 2. Estructura alumno: nombre, edad, promedio
//Pedir daos al usuario. Comprobar cual tiene el mejor promedio. Imprimir datos

#include <iostream>
#include<string.h>

using namespace std;

struct alumno {
    char nombre[40];
    int edad;
    float promedio;
};

void ordenamientoPorPormedio(alumno alumnos[], int first, int last) {

    int central = (last + first) / 2;
    float pivote = alumnos[central].promedio;
    int i = first, j = last;

    while (i <= j) {
        while (alumnos[i].promedio > pivote) {
            i++;
        }
        while (alumnos[j].promedio < pivote) {
            j--;
        }
        if (i <= j) {
            struct alumno alumnoAux = alumnos[i];
            alumnos[i] = alumnos[j];
            alumnos[j] = alumnoAux;
            i++;
            j--;
        }
    }

    if (j > first) {
        ordenamientoPorPormedio(alumnos, first, j);
    }
    if (i < last) {
        ordenamientoPorPormedio(alumnos, i, last);
    }
}

int main() {
    int noAlunmos;

    cout << "¿Cuantos alumnos deasea crear?: ";
    cin>>noAlunmos;
    struct alumno alumnos[noAlunmos];

    for (int i = 0; i < noAlunmos; i++) {
        fflush(stdin);
        cout << "¿Cual es el nombre del alumno " << (i + 1) << "?: ";
        cin.getline(alumnos[i].nombre, 40, '\n');
        cout << "¿Cual es la edad del alumno " << (i + 1) << "?: ";
        cin >> alumnos[i].edad;
        cout << "¿Cual es el promedio del alumno " << (i + 1) << "?: ";
        cin >> alumnos[i].promedio;
        cout << '\n';
    }

    ordenamientoPorPormedio(alumnos, 0, (noAlunmos - 1));

    cout << "Datos de los alumnos por promedio: " << endl;
    for (int i = 0; i < noAlunmos; i++) {
        if (i == 0) {
            cout << "Alumno con mejor promedio: " << endl;
            cout << "Nombre: " << alumnos[i].nombre << endl;
            cout << "Edad: " << alumnos[i].edad << endl;
            cout << "Promedio: " << alumnos[i].promedio << endl;
        } else {
            cout << "Alumno con el siguiente mejor promedio: " << endl;
            cout << "Nombre: " << alumnos[i].nombre << endl;
            cout << "Edad: " << alumnos[i].edad << endl;
            cout << "Promedio: " << alumnos[i].promedio << endl;
        }
    }

    return 0;
}
*/