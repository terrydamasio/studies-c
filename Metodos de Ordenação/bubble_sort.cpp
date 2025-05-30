#include <stdio.h>
#include <iostream>

// bubble sort compara os pares adjacentes e troca seus valores se estiverem fora de ordem

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }   
    }
}

int main() {
    int arr[] = {4, 2, 3, 3, 1, 2, 4, 1, 5, 5}; 
    int tam = 10;

    bubbleSort(arr, tam);

    std::cout << "Array ordenado: ";

    for(int i = 0; i < tam; i++)
        std::cout << arr[i] << " ";
    
    return 0;
}

/*
Bubble Sort 

Array -> 
[4, 2, 3, 3, 1, 2, 4, 1, 5, 5]

[2, 3, 3, 1, 2, 4, 1, 4, 5, 5]

[2, 3, 1, 2, 3, 1, 4, 4, 5, 5]

[2, 1, 2, 3, 1, 3, 4, 4, 5, 5]

[1, 2, 2, 1, 3, 3, 4, 4, 5, 5]

[1, 2, 1, 2, 3, 3, 4, 4, 5, 5]

[1, 1, 2, 2, 3, 3, 4, 4, 5, 5]

*/