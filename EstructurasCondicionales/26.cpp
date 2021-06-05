/*// 6. Determinar si es una vocal minuscula, mayuscula, o no

#include <iostream>

using namespace std;

int main() {
    
    char vocal;
    
    cout<<"Escriba una vocal: ";
    cin>>vocal;
    
    switch(vocal) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"Es minuscula "<<vocal;
            break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout<<"Es mayuscula "<<vocal;
            break;
        default:
            cout<<"Fuera de rango "<<vocal;
            break;
    }
    
    return 0;
}*/