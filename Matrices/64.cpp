/*// 3. Matiz de 2x2. Copiar su contenido a otra matiz

#include <iostream>

using namespace std;

int main() {
    
    int a[2][2];
    int rows =  sizeof a / sizeof a[0]; 
    int cols = sizeof a[0] / sizeof(int);
    int b[rows][cols];
    
    for(int i=0;i<rows;i++) {
        for(int j=0;j<rows;j++) {
            cout<<"Digite el valor del numero en la fila "<<(i+1)<<" y columna "<<(j+1)<<" : ";
            cin>>a[i][j];
            b[i][j] = a[i][j];
        }
    }
    
    for(int i=0;i<rows;i++) {
        for(int j=0;j<rows;j++) {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    
    for(int i=0;i<rows;i++) {
        for(int j=0;j<rows;j++) {
            cout<<b[i][j];
        }
        cout<<"\n";
    }
    
    
    
    return 0;
}*/