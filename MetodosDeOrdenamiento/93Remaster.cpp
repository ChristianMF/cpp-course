/*//QuickSort

#include <iostream>

using namespace std;

void quickSort(float a[],int first, int last) {
    
    int centralIndex = (last + first)/2;
    float pivote = a[centralIndex];
    
    int i = first;
    int j = last;
    
    while(i<=j) {
        while(a[i] < pivote) {
            i++;
        }
        while(a[j] > pivote) {
            j--;
        }
        
        if(i<=j) {
            float aux = a[i];
            a[i] = a[j];
            a[j] = aux;
            i++;
            j--;
        }
    }
    
    if(j > first) {
        quickSort(a,first,j);
    }
    if(i < last) {
        quickSort(a,i,last);
    }
    
}

int main() {
    
    //float a[] = {6, 7, 56, 7, 2, 4, 54, 3, 908, 33, 2, 54, 6};
    float a[] = {4, 7, 1, 8, 2, 10, 5, 9, 3};
    int arrSize = *(&a + 1) - a;
    
    quickSort(a,0,(arrSize-1));
    
    //Imprimir ordenados ascendente
    for(int i=0;i<arrSize;i++) {
        cout<<a[i]<<" ";
    }
    
    return 0;
}*/