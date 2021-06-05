/*// 4. Programa para leer cada 4 hrs la temp en 24 hrs (6 temps).
//Calcular temp media, tem mas alta, temp mas baja

#include <iostream>

using namespace std;

int main() {
    
    float temp, tempMedia, alta = 0, baja = 9999999;
    
    for(int i=0;i<24;i+=4) {
        cout<<"Digite la temperatura de la hora "<<i<<" : ";
        cin>>temp;
        tempMedia+=temp;
        if(temp < baja) {
            baja = temp;
        }
        if(temp > alta) {
            alta = temp;
        }
    }
    
    tempMedia/=(24/4);
    
    cout<<"Temperatura media: "<<tempMedia<<endl;
    cout<<"Temperatura alta: "<<alta<<endl;
    cout<<"Temperatura baja: "<<baja<<endl;
    
    return 0;
}*/