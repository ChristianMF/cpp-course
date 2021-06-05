/*//13. Calcular fibonacci 1,1,2,3,5,8,13,...,n

#include <iostream>

using namespace std;

int main() {
    
    int a,b=0,c=1,d=1;
    
    cout<<"Digite un numero: ";
    cin>>a;
    
    for(int i=1;i<=a;i++) {
        cout<<c<<" ";
        c += b;
        b = d;
        d = c;
    };
    
    //0 1 1 2 3 5 8
    
    return 0;
}*/