/*// 4. Preguntar numero de filas y columnas, llenar de numeros aleatorios y poner en otra

#include <iostream>

using namespace std;

int main() {
    
    int rows,cols,ran;
    
    cout<<"Digite el numero de filas: ";
    cin>>rows;
    cout<<"Digite el numero de columnas: ";
    cin>>cols;
    
    int a[rows][cols];
    rows =  sizeof a / sizeof a[0]; 
    cols = sizeof a[0] / sizeof(int);
    srand (time(NULL));
    
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            a[i][j] = ran = rand() % 100 + 1;;
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}*/