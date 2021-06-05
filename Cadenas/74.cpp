/*// 2. Pedir a usuario una cadena de caracteres, almacenar en arreglo y pasarlo a otro

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    
    char pal[40], pal2[40];
    
    cout<<"Digite una plaabra de menos o igual 40 carateres: ";
    cin.getline(pal,40,'\n');
    
    strcpy(pal2,pal);
    
    cout<<"La palabra: "<<pal2;
    
    return 0;
}*/