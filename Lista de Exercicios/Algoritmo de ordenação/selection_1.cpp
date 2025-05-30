#include <stdio.h>
#include <iostream>

int main () {

    int v[] = {29, 10, 14, 37, 13, 40, 2, 7, 5, 18};
    for (int i = 0; i < 10 - 1; i++) {
        int min = i;
        for (int j = i + 1; j < 10; j++) {
            if (v[j] < v[min]) min = j;
        }
        if (min != i) {
            swap(v[i], v[min]);
            // Mostrar vetor após troca
            for (int k = 0; k < 10; k++) cout << v[k] << " ";
            cout << endl;
        }
    }

    return 0;
}