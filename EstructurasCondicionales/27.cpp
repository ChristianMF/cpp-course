/*// 7. Solicitar una edad entera y determinar rango

#include <iostream>

using namespace std;

int main() {
    
    int edad;
    
    cout<<"Digita tu edad: ";
    cin>>edad;
    
    if(edad < 18 && edad >= 0) {
        cout<<"Tu edad esta en el rango de 0-17 años";
    } else if(edad >= 18 && edad <= 25) {
        cout<<"Tu edad esta en el rango de 18-25 años";
    } else {
        cout<<"Tu edad esta en el rango de arriba de los 25 años";
    }
    
    return 0;
}*/