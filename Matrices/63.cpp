/*// 2. Programa con matirz 3x3. Muestre la diagonal

#include <iostream>

using namespace std;

int main() {
    
    int a[3][3];
    int rows =  sizeof a / sizeof a[0]; 
    int cols = sizeof a[0] / sizeof(int);
    
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout<<"Digite el valor de la fila "<<(i+1)<<" y columnas "<<(j+j)<<" : ";
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    
    
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            if(i == j) {
                cout<<a[i][j];
            }
        }
        cout<<"\n";
    }
    
    return 0;
}*/