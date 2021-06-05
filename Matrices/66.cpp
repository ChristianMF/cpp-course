/*// 5. Realizar matrix 3x3. Realice la matriz transpuesta

#include <iostream>

using namespace std;

int main() {
    
    int a[3][3], b[3][3];
    int rows =  sizeof a / sizeof a[0]; 
    int cols = sizeof a[0] / sizeof(int);
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"Digite el valor de la fila "<<(i+1)<<" y columna "<<(j+1)<<" : ";
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            b[i][j] = a[j][i];
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}*/