#include <stdio.h>
#include <iostream>

int main () {

    int v[] = {5, 4, 3, 2, 1, 6, 7, 8, 9, 10};
    int trocas = 0;
    for (int i = 0; i < 10 - 1; i++) {
        int min = i;
        for (int j = i + 1; j < 10; j++) {
            if (v[j] < v[min]) min = j;
        }
        if (min != i) {
            swap(v[i], v[min]);
            trocas++;
        }
    }
    cout << "Total de trocas: " << trocas << endl;

    return 0;
}