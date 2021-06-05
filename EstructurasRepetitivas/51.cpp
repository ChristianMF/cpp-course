/*// 16. Calcular descomposicion en factores primos de numero entero

#include <iostream>

using namespace std;

int main() {

    int a;

    cout << "Digite numero: ";
    cin>>a;

    //    while(a != 1 && a != -1) {
    //        if(a % 2 == 0) {
    //            cout<<2<<" ";
    //            a/=2;
    //        } else if(a % 3 == 0) {
    //            cout<<3<<" ";
    //            a/=3;
    //        } else if(a % 5 == 0) {
    //            cout<<5<<" ";
    //            a/=5;
    //        } else if(a % 7 == 0) {
    //            cout<<7<<" ";
    //            a/=7;
    //        }
    //    }

    for (int i = 2; a > 1; i++) {
        while (a%i == 0) {
            cout << i << " ";
            a /= i;
        }
    }

    return 0;
}/*