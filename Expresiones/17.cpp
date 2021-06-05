/*//10. Calcular expresion

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float a, b, c, x1=0, x2=0;
    
    cout<<"Digite el valor de a: ";
    cin>>a;
    cout<<"Digite el valor de b: ";
    cin>>b;
    cout<<"Digite el valor de c: ";
    cin>>c;
    
    x1 = (-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
    x2 = (-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
    
    cout.precision(2);
    cout<<"\nEl primer punto donde la curva toca el eje x, es x = "<<x1<<endl;
    cout.precision(2);
    cout<<"\nEl segundo punto donde la curva toca el eje x, es x = "<<x2<<endl;
    
    return 0;
}*/ 
