/*//Estructuras anidadas

#include <iostream>

using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];

int main() {
    
    for(int i=0;i<2;i++) {
        fflush(stdin); //vaciar buffer y permitir digitar
        cout<<"Digite el nombre del empleado "<<i+1<<": ";
        cin.getline(empleados[i].nombre,20,'\n');
        cout<<"Digite la direccion del empleado "<<i+1<<": ";
        cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
        cout<<"Digite la ciudad del empleado "<<i+1<<": ";
        cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
        cout<<"Digite la provincia del empleado "<<i+1<<": ";
        cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
        cout<<"Digite el salario del empleado "<<i+1<<": ";
        cin>>empleados[i].salario;
        cout<<"\n";
    }
    
    cout<<"Datos:"<<endl;
    for(int i=0;i<2;i++) {
        cout<<"Nombre nombre del empleado "<<i+1<<": "<<empleados[i].nombre<<endl;
        cout<<"Digite la direccion del empleado "<<i+1<<": "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Digite la ciudad del empleado "<<i+1<<": "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Digite la provincia del empleado "<<i+1<<": "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"Digite el salario del empleado "<<i+1<<": "<<empleados[i].salario<<endl;
        cout<<"\n";
    }
    
    return 0;
}*/