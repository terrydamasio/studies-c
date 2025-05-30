#include <stdio.h>
#include <iostream>

// selection sort encontra-se o menor valor e troca-o com o elemento da posição atual, ordenando-o na lista

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        
        for (int j = i + 1; j < n; j++) {    
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}   

int main() {
    int arr[] = {9, 7, 7, 3, 1, 2, 2, 4, 8, 6}; 
    int tam = 10;
    
    selectionSort(arr, tam);
    std::cout << "Array ordenado: ";
    
    for(int i = 0; i < tam; i++)
        std::cout << arr[i] << " ";
    
    return 0;
}


/*
Selection Sort 

Array -> [9, 7, 7, 3, 1, 2, 2, 4, 8, 6]

[1, 7, 7, 3, 9, 2, 2, 4, 8, 6]

[1, 2, 7, 3, 9, 7, 2, 4, 8, 6]

[1, 2, 2, 3, 9, 7, 7, 4, 8, 6]

[1, 2, 2, 3, 4, 7, 7, 9, 8, 6]

[1, 2, 2, 3, 4, 6, 7, 9, 8, 7]

[1, 2, 2, 3, 4, 6, 7, 7, 8, 9]

*/
