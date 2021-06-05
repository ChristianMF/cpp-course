//3. Lee datos: edad entero, sexo caracter, altura real float

#include <iostream>

using namespace std;

int main() {
    int edad;
    char sexo[10];
    float altura;
    
    cout<<"¿Cúal es su edad?: ";
    cin>>edad;
    
    cout<<"¿Cúal es su sexo?: ";
    cin>>sexo;
    
    cout<<"¿Cúal es su altura?: ";
    cin>>altura;
    
    cout<<"Edad: "<<edad;
    cout<<"\nSexo: "<<sexo;
    cout<<"\nAltura: "<<altura;
    
    return 0;
}