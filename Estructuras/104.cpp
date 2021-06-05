/*// 3. Estructura de empleado: salario y nombre. 
// Imprimir al empleado con mayor y menor salario

#include <iostream>

using namespace std;

struct alumno {
    char nombre[40];
    float salario;
};

void ordenamientoEmpleado(alumno alumnos[], int first, int last) {
    
    int central = (last+first)/2;
    int pivote = alumnos[central].salario;
    int i = first, j = last;
    
    while(i<=j) {
        while(alumnos[i].salario > pivote) {
            i++;
        }
        while(alumnos[j].salario < pivote) {
            j--;
        }
        if(i<=j) {
            struct alumno alumnoAux = alumnos[i];
            alumnos[i] = alumnos[j];
            alumnos[j] = alumnoAux;
            i++;
            j--;
        }
    }
    
    if(j > first) {
        ordenamientoEmpleado(alumnos,first,j);
    }
    if(i < last) {
        ordenamientoEmpleado(alumnos,i,last);
    }
}

int main() {
    
    int noEmpleados;
    
    cout<<"¿Cuantos empleados registrar?: ";
    cin>>noEmpleados;
    struct alumno alumnos[noEmpleados];
    
    for(int i=0;i<noEmpleados;i++) {
        fflush(stdin);
        cout<<"Digite el nombre del empleado "<<(i+1)<<": ";
        cin.getline(alumnos[i].nombre,40,'\n');
        cout<<"Digite el salario del empleado "<<(i+1)<<": ";
        cin>>alumnos[i].salario;
        cout<<'\n';
    }
    
    ordenamientoEmpleado(alumnos,0,(noEmpleados-1));
    
    cout<<"Datos: "<<endl;
    for(int i=0;i<noEmpleados;i++) {
        if(i==0) {
            cout<<"Empleado con salario mas alto"<<endl;
            cout<<"\tNombre: "<<alumnos[i].nombre<<endl;
            cout<<"\tSalario: "<<alumnos[i].salario<<endl;
        } else if((i+1) == noEmpleados) {
            cout<<"Empleao con salario mas bajo"<<endl;
            cout<<"\tNombre: "<<alumnos[i].nombre<<endl;
            cout<<"\tSalario: "<<alumnos[i].salario<<endl;
        }
    }
    
    return 0;
}*/