/*//Busqueda binaria
// Más rapida que la busqueda secuancial. Se necesita un arreglo ordenado asendentemente

#include <iostream>

using namespace std;

int main() {
    
    int numeros[] = {1,2,3,4,5};
    int inf, sup, mitad, dato;
    char bandera = 'F';
    
    dato = 4;
    
    //Busqueda binaria
    inf = 0;
    sup = 5;
    
    while(inf <= sup) {
        mitad = (inf+sup)/2;
        
        if(numeros[mitad] == dato) {
            bandera = 'V';
            break;
        }
        if(numeros[mitad] > dato) {
            sup = mitad;
            mitad = (inf+sup)/2;
        }
        if(numeros[mitad] < dato) {
            inf = mitad;
            mitad = (inf+sup)/2;
        }
    }
    
    if(bandera == 'V') {
        cout<<dato<<" el numero ha sido encontrado en la posicion: "<<mitad;
    } else {
        cout<<"No encontro numero";
    }
    
    
    return 0;
}*/