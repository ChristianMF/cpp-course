/*// 6. Convertir dos cadenas de minuscula a mayscula. Comparar y decir si son igual

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    
    char pal1[40], pal2[40];
    
    cout<<"Digite la primera frase: ";
    cin.getline(pal1,40,'\n');
    
    cout<<"Digite la segunda frase: ";
    cin.getline(pal2,40,'\n');
    
    for(int i=0;i<strlen(pal1);i++) {
        pal1[i] = toupper(pal1[i]);
    }
    
    for(int i=0;i<strlen(pal2);i++) {
        pal2[i] = toupper(pal2[i]);
    }
    
    if(strcmp(pal1,pal2) == 0) {
        cout<<"Son iguales "<<pal1<<" "<<pal2;
    } else {
        cout<<"No son iguales"<<pal1<<" "<<pal2;
    }
    
    return 0;
}*/