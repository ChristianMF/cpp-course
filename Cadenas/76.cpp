/*// 3. Pedir al usuario 2 cadenas de caracteres. Idicar si son iguales o cual es mayor

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    
    char pal1[40], pal2[40];
    
    cout<<"Digite la primera frase: ";
    cin.getline(pal1,40,'\n');
    cout<<"Digite la segunda frase: ";
    cin.getline(pal2,40,'\n');
    
    if(strcmp(pal1,pal2)==0) {
        cout<<"Ambas cadenas son iguales";
    } else if(strcmp(pal1,pal2)>0) {
        cout<<pal1<<" esta despues alfabeticamente";
    } else {
        cout<<pal2<<" esta despues alfabeticamente";
    }
    
    return 0;
}*/