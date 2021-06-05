/*// 6. Programa que calcule suma de 2 matrices 3x3

#include <iostream>

using namespace std;

int main() {
    
    int a[3][3], b[3][3];
    int rows =  sizeof a / sizeof a[0]; 
    int cols = sizeof a[0] / sizeof(int);
    
    cout<<"Para la primera matriz"<<endl;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout<<"Digite el valor para la fila "<<(i+1)<<" y columna "<<(j+1)<<" : ";
            cin>>a[i][j];
        }
    }
    
    cout<<"Para la segunda matriz"<<endl;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout<<"Digite el valor para la fila "<<(i+1)<<" y columna "<<(j+1)<<" : ";
            cin>>b[i][j];
        }
    }
    
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout<<a[i][j] * b[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}*/