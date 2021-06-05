/*// 5. Estructura anidada
// promedio: nota1, nota2, nota3
// alumno: nombre, sexo, edad
// Estructura promedio anidada en alumno. Pedir datos, calcular promedio e imprimir

#include <iostream>

using namespace std;

struct promedio {
    float nota1;
    float nota2;
    float nota3;
    //float promedio = (nota1+nota1+nota1)/3;
};

struct alumno {
    char nombre[40];
    char sexo[40];
    int edad;
    struct promedio promedio;
};

int main() {
    
    int noAlumno;
    
    cout<<"Digite el numero de alumnos: ";
    cin>>noAlumno;
    struct alumno alumnos[noAlumno];
    
    for(int i=0;i<noAlumno;i++) {
        fflush(stdin);
        cout<<"Digite el nombre del alumno "<<(i+1)<<": ";
        cin.getline(alumnos[i].nombre,40,'\n');
        cout<<"Digite el sexo del alumno "<<(i+1)<<": ";
        cin.getline(alumnos[i].sexo,40,'\n');
        cout<<"Digite la edad del alumno "<<(i+1)<<": ";
        cin>>alumnos[i].edad;
        cout<<"Digite la nota 1 del alumno "<<(i+1)<<": ";
        cin>>alumnos[i].promedio.nota1;
        cout<<"Digite la nota 2 del alumno "<<(i+1)<<": ";
        cin>>alumnos[i].promedio.nota2;
        cout<<"Digite la nota 3 del alumno "<<(i+1)<<": ";
        cin>>alumnos[i].promedio.nota3;
        float promedio = (alumnos[i].promedio.nota1+alumnos[i].promedio.nota2+alumnos[i].promedio.nota3)/3;
        cout<<"Promedio del alumno "<<(i+1)<<": "<<promedio;
        cout<<'\n';
    }
    
    cout<<"Datos de los alumnos: "<<endl;
    for(int i=0;i<noAlumno;i++) {
        cout<<"Alumno "<<(i+1)<<endl;
        cout<<"\tNombre: "<<alumnos[i].nombre<<endl;
        cout<<"\tSexo: "<<alumnos[i].sexo<<endl;
        cout<<"\tEdad: "<<alumnos[i].edad<<endl;
        float promedio = (alumnos[i].promedio.nota1+alumnos[i].promedio.nota2+alumnos[i].promedio.nota3)/3;
        cout<<"\tPromedio: "<<promedio<<endl;
    }
    
    return 0;
}*/