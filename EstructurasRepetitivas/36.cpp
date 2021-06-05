/*// 1. Pedir un numero entero, calcular tabla de multiplicar

#include <iostream>

using namespace std;

int main() {
    
//    float num, res;
//    int i = 1;
//    
//    cout<<"Digite un numero: ";
//    cin>>num;
//    
//    cout<<"Tabla de multiplicar del numero "<<num<<endl;
//    do {
//        res = num * i;
//        cout<<num<<" * "<<i<<" = "<<res<<endl;
//        i++;
//    } while (i<=10);
    
    int num;
    
    do {
        cout<<"Digite un numero entre 1 y 10: ";
        cin>>num;
    } while(!(num >= 1 && num <= 10));
    
    for(int i = 0;i <= 10;i++) {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    };
    
    return 0;
}*/