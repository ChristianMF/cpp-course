/*// 10. Calcular suma de factoriales 1!+2!+3!+...+n

#include <iostream>

using namespace std;

int main() {
    int a, b = 1, acum = 0, acumSeg = 1;

    cout << "Digite el numero: ";
    cin>>a;

    //    for(int i=1;i<=a;i++) {
    //        for(int j=1;j<=b;j++) {
    //            acumSeg *= j;
    //        };
    //        b++;
    //        acum += acumSeg;
    //        acumSeg = 1;
    //    };

    for (int i = 1; i <= a; i++) {
        acumSeg *= i;
        acum += acumSeg;
    };

    cout << "Resultado: " << acum;

    return 0;
}*/