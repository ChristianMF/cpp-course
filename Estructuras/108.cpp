// 7. Estructura de etapas: horas, minutos y segundos.
// Imprimir el calculo para correr todas las etapas

#include <iostream>

using namespace std;

struct etapa {
    int horas;
    int minutos;
    int segundos;
};

int main() {
    
    int noEtapas;
    
    cout<<"Digite el numero de etapas: ";
    cin>>noEtapas;
    struct etapa etapas[noEtapas];
    
    for(int i=0;i<noEtapas;i++) {
        fflush(stdin);
        cout<<"Digite las horas de la etapa "<<(i+1)<<": ";
        cin>>etapas[i].horas;
        cout<<"Digite los minutos de la etapa "<<(i+1)<<": ";
        cin>>etapas[i].minutos;
        cout<<"Digite los segundo de la etapa "<<(i+1)<<": ";
        cin>>etapas[i].segundos;
        cout<<'\n';
    }
    
    return 0;
}