/*//7. Promedio de calif de estudiante:
//practicas 30%
//teorica 60%
//participacion 10%

#include <iostream>

using namespace std;

int main() {
    
    float prac,teo,part,total;
    
    cout<<"¿Cual es su calificacion de practicas?: ";
    cin>>prac;
    cout<<"¿Cual es su calificacion de teorica?: ";
    cin>>teo;
    cout<<"¿Cual es su calificacion de participacion?: ";
    cin>>part;
    
    total = (.30 * prac) + (.60 * teo) + (.10 * part);
    
    cout<<"\nEl promedio es: "<<total<<endl;
    
    return 0;
}*/