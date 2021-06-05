/*// 8. Pedir 2 cadenas de numeros, un entero y otro real. Transformar y sumar

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    
    char num1[40],num2[40];
    int numer1,numer2;
    float numero1,numero2;
    
    cout<<"Digite el primer numero: ";
    cin.getline(num1,40,'\n');
    cout<<"Digite el segundo numero: ";
    cin.getline(num2,40,'\n');
    
    //primer numero
    for(int i=0;i<strlen(num1);i++) {
        if(num1[i] == '.') {
            numero1 = atof(num1);
            cout<<numero1<<endl;
            break;
        } else if((i+1) == strlen(num1)) {
            numer1 = atoi(num1);
            cout<<numer1<<endl;
        }
    }
    
    //segundo numero
    for(int i=0;i<strlen(num2);i++) {
        if(num2[i] == '.') {
            numero2 = atof(num2);
            cout<<numero2<<endl;
            break;
        } else if((i+1) == strlen(num2)) {
            numer2 = atoi(num2);
            cout<<numer2<<endl;
        }
    }
    
    if(numer1 != NULL && numer2 != NULL) {
        cout<<numer1+numer2;
    } else if (numer1 != NULL && numero2 != NULL) {
        cout<<numer1+numero2;
    } else if (numero1 != NULL && numero2 != NULL) {
        cout<<numero1+numero2;
    } else {
        cout<<numero1+numer2;
    }
    
    
    return 0;
}

*/