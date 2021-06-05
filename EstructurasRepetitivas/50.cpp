/*// 15. Pedir numero a usuario entre 1 y 100. Generar nuero aleatorio entre 1 y 100
// Indicar su aleatorio es mayor o menor a pedido, hasta adivinar.
// Mostrar numero de intentos

#include <iostream>

using namespace std;

int main() {
    
    int a, count = 0;
    //int b = rand()%(100-1+1)+1;
    srand(time(NULL));
    int b = rand()%(100);
    
    cout<<"Digite un numero entre 1 y 100: ";
    cin>>a;
    
    while(b != a) {
        if(b > a) {
            cout<<count+1<<" . "<<"El numero aleatorio es mayor al introducido"<<endl;
        } else {
            cout<<count+1<<" . "<<"El numero aleatorio es menor al introducido"<<endl;
        }
        //b = rand()%(100-1+1)+1;
        b = rand()%(100);
        count++;
    }
    
    cout<<"Se adivino el numero: "<<b<<endl;
    cout<<"Numero de intentos: "<<count<<endl;
    
    return 0;
}*/