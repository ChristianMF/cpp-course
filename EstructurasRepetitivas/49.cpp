/*// 14. 5 alumnos realizaron 3 examenes. Determinar:
//a) alumnos que aprobaron todos los examenes
//b) alumnos que aprobaron al menos 1 examen
//c) alumnos que aprobaron unicamente el ultimo examen

#include <iostream>

using namespace std;

int main() {
    
    int cE1 = 0, cE2 = 0, cE3 = 0, c1 = 0, cT = 0;
    float e1, e2, e3;
    
    for(int i=1;i<=5;i++) {
        cout<<"Calificacion del examen 1 del alumno numero "<<i<<" : ";
        cin>>e1;
        if(e1 >= 6) {
            cE1++;
        }
        cout<<"Calificacion del examen 2 del alumno numero "<<i<<" : ";
        cin>>e2;
        if(e2 >= 6) {
            cE2++;
        }
        cout<<"Calificacion del examen 3 del alumno numero "<<i<<" : ";
        cin>>e3;
        if(e3 >= 6) {
            cE3++;
        }
        if(e1 >= 6 && e2 >= 6 && e3 >= 6) {
            cT++;
        }
        if(e1 >= 6 || e2 >= 6 || e3 >= 6) {
            c1++;
        }
    }
    
    cout<<"a) Alumnos que aprobaron todos los examenes: "<<cT<<endl;
    cout<<"b) Alumnos que aprobaron al menos 1 examen: "<<c1<<endl;
    cout<<"c) Alumnos que aprobaron unicamente el ultimo examen: "<<cE3<<endl;
    
    return 0;
}
*/