/*// 4. Estructura atleta: nombre, pais, numero_medallas.
// Imprimir nombre y pais de atleta con mayor numero de medallas

#include <iostream>

using namespace std;

struct atleta {
    char nombre[40];
    char pais[40];
    int numeroMedallas;
};

void ordenamientoAtlatas(atleta atletas[], int first, int last) {

    int central = (last+first)/2;
    int pivote = atletas[central].numeroMedallas;
    int i=first, j=last;
    
    while(i<=j) {
        while(atletas[i].numeroMedallas > pivote) {
            i++;
        }
        while(atletas[j].numeroMedallas < pivote) {
            j--;
        }
        if(i<=j) {
            struct atleta atletaAux = atletas[i];
            atletas[i] = atletas[j];
            atletas[j] = atletaAux;
            i++;
            j--;
        }
    }
    
    if(j > first) {
        ordenamientoAtlatas(atletas,first,j);
    }
    if(i < last) {
        ordenamientoAtlatas(atletas,i,last);
    }
    
    
}

int main() {
    int noAtletas;
    
    cout<<"Digite el numero de atletas: ";
    cin>>noAtletas;
    struct atleta atletas[noAtletas];
    
    for(int i=0;i<noAtletas;i++) {
        fflush(stdin);
        cout<<"Digite el nombre del atleta "<<(i+1)<<": ";
        cin.getline(atletas[i].nombre,40,'\n');
        cout<<"Digite el pais del atleta "<<(i+1)<<": ";
        cin.getline(atletas[i].pais,40,'\n');
        cout<<"Digite el numero de medallas del atleta "<<(i+1)<<": ";
        cin>>atletas[i].numeroMedallas;
        cout<<'\n';
    }
    
    ordenamientoAtlatas(atletas,0,(noAtletas-1));
    
    cout<<"Datos del atleta con mas medallas: "<<endl;
    cout<<"\tNombre: "<<atletas[0].nombre<<endl;
    cout<<"\tPais: "<<atletas[0].pais<<endl;
    cout<<"\tNumero de Medallas: "<<atletas[0].numeroMedallas<<endl;
    
    return 0;
}*/