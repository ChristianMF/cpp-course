/*//Busqueda secuencial
//Buscar o recorrer arreglo para ver si dato comparativo existe

#include <iostream>

using namespace std;

int main() {
    
//    int a[] = {3,4,2,1,5};
//    int i, dato;
//    char bandera = 'F';
//    
//    //Busqueda secuencial
//    i = 0;
//    dato = 4;
//    
//    while(bandera == 'F' && (i<5)) {
//        if(a[i] == dato) {
//            bandera = 'V';
//        }
//        i++;
//    }
    int a[] = {'a','e','i','o','u'};
    int i;
    char dato;
    char bandera = 'F';
    
    //Busqueda secuencial
    i = 0;
    dato ='o';
    
    while(bandera == 'F' && (i<5)) {
        if(a[i] == dato) {
            bandera = 'V';
        }
        i++;
    }
    
    if(bandera == 'F') {
        cout<<dato<<" no encontrado";
    } else {
        cout<<dato<<" ha sido encontrado en la posicion: "<<i<<endl;
    }
    
    return 0;
}*/