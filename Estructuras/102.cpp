/*//1. Estructura corredor: nombre, edad, sexo, club, categoría.
// Pedir al usuario los datos. Imprimir datos.
// Juvenil <= 18 años
// Señor <= 40 años
// Veterano > 40 años

#include <iostream>
#include <string.h>

using namespace std;

struct corredor{
    char nombre[40];
    int edad;
    char sexo[20];
    char club[40];
    char categoria[40];
};

int main() {
    
    int noCorredores;
    cout<<"¿Cuantos corredores desea crear?: ";
    cin>>noCorredores;
    struct corredor corredores[noCorredores];
    
    for(int i=0;i<noCorredores;i++) {
        fflush(stdin); //vaciar buffer y permitir digitar
        cout<<"¿Cual es el nombre del corredor "<<(i+1)<<"?: ";
        cin.getline(corredores[i].nombre,40,'\n');
        cout<<"¿Cual es la edad del corredor "<<(i+1)<<"?: ";
        cin>>corredores[i].edad;
        fflush(stdin);
        if(corredores[i].edad <= 18) {
            strcpy(corredores[i].categoria,"Juvenil");
            //strlcpy(corredores[i].categoria,"Juvenil",7);
        } else if(corredores[i].edad <= 40) {
            strcpy(corredores[i].categoria,"Señor");
            //strlcpy(corredores[i].categoria,"Señor",5);
        } else {
            strcpy(corredores[i].categoria,"Veterano");
            //strlcpy(corredores[i].categoria,"Veterano",8);
        }
        cout<<"La categoría del corredor "<<(i+1)<<" es: "<<corredores[i].categoria<<endl;
        cout<<"¿Cual es el sexo del corredor "<<(i+1)<<"?: ";
        cin.getline(corredores[i].sexo,20,'\n');
        cout<<"¿Cual es el club del corredor "<<(i+1)<<"?: ";
        cin.getline(corredores[i].club,40,'\n');
        
        cout<<"\n";
    }
    
    //Datos
    cout<<"Datos"<<endl;
    for(int i=0;i<noCorredores;i++) {
        cout<<"El nombre del corredor "<<(i+1)<<" es: "<<corredores[i].nombre<<endl;
        cout<<"La edad del corredor "<<(i+1)<<" es: "<<corredores[i].edad<<endl;
        cout<<"El sexo del corredor "<<(i+1)<<" es: "<<corredores[i].sexo<<endl;
        cout<<"El club del corredor "<<(i+1)<<" es: "<<corredores[i].club<<endl;
        cout<<"La categoría del corredor "<<(i+1)<<" es: "<<corredores[i].categoria<<endl;
    }
    
    return 0;
}*/