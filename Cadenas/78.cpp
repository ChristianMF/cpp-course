/*// 4. cadena con frase Hola que tal. Otra cadena preguntando por nombre. Mostrar concatenacion

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    
    char nombre[20];
    char msg[] = "Hola que tal ";
    char msgTotal[30];
    
    cout<<"Digite su nombre: ";
    cin.getline(nombre,20,'\n');
    
    strcpy(msgTotal,msg);
    strcat(msgTotal,nombre);
    
    cout<<msgTotal<<endl;
    
    return 0;
}*/