#include <stdio.h>
#include <iostream>

// insertion sort insere cada elemento em sua posição correta relativa aos elementos já ordenados 

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6}; int n = 5;
    insertionSort(arr, n);
    
    std::cout << "Array ordenado: ";
    
    for(int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    
    return 0;
}

/*
Insertion Sort 

Array -> [5, 3, 3, 1, 1, 2, 2, 4, 4, 5]

[3, 5, 3, 1, 1, 2, 2, 4, 4, 5]

[3, 3, 5, 1, 1, 2, 2, 4, 4, 5]

[1, 3, 3, 5, 1, 2, 2, 4, 4, 5]

[1, 1, 3, 3, 5, 2, 2, 4, 4, 5]

[1, 1, 2, 3, 3, 5, 2, 4, 4, 5]

[1, 1, 2, 2, 3, 3, 5, 4, 4, 5]

[1, 1, 2, 2, 3, 3, 4, 5, 4, 5]

[1, 1, 2, 2, 3, 3, 4, 4, 5, 5]

*/