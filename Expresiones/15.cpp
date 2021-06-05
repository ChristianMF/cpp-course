/*//8. Escribir dos catetos y calcular hipotenusa

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    float cat1, cat2, hip=0;
    
    cout<<"Digite el primer cateto: ";
    cin>>cat1;
    cout<<"Digite el segundo cateto: ";
    cin>>cat2;
    
    hip = sqrt(pow(cat1,2) + pow(cat2,2));
    
    cout.precision(2);
    cout<<"\nEl valor de la hipotenusa es: "<<hip<<endl;
    
    return 0;
}*/