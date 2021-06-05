/*//Estructuras Básicas C++

#include <iostream>

using namespace std;

//struct Persona {
//  char nombrepersona[20];
//  int edad;
//} 
//
//persona1 = {"Alejandro",20},
//        
//persona2 = {"Ruperto",15};
//
//int main() {
//    
//    cout<<"Nombre1: "<<persona1.nombrepersona<<endl;
//    cout<<"Edad1: "<<persona1.edad<<endl;
//    cout<<"Nombre2: "<<persona2.nombrepersona<<endl;
//    cout<<"Edad2: "<<persona2.edad<<endl;
//    
//    return 0;
//}
struct Persona {
  char nombrepersona[20];
  int edad;
} persona1,persona2;

int main() {
    
    cout<<"Digite el nombre: "; 
    cin.getline(persona1.nombrepersona,20,'\n');
    cout<<"Digite la edad: "; 
    cin>>persona1.edad;
    
    cout<<"Nombre: "<<persona1.nombrepersona<<endl;
    cout<<"Edad: "<<persona1.edad<<endl;
    
    return 0;
}*/