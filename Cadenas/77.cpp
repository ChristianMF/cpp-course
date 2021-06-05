/*//Funcion strcat() - Concatenar cadenas

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    
    char cat1[] = "Esto es una cadena";
    char cat2[] = " de ejemplo";
    char cat3[30];
    
    strcpy(cat3,cat1); //cat3 = "Esto es una cadena"
    
    strcat(cat3,cat2); //cat3 = "Esto es una cadena" + " de ejemplo"
    
    cout<<cat3<<endl;
    
    return 0;
}*/